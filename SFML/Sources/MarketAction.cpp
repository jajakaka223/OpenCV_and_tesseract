#include "../Headers/MarketAction.h"

#define SLEEPING_TIME 250

//struct OrderConfig {
//	map <pair<int, int>, int> ListItemLimitOrder = {
//		{{6, 0} , 5},
//		{{6, 1} , 2},
//		{{6, 2} , 1},
//
//		{{7, 0}, 3},
//		{{7, 1}, 2},
//		{{7, 2}, 1},
//
//		{{8, 0}, 2},
//		{{8, 1}, 1},
//		{{8, 2}, 0},
//	};
//
//	
//	int up_border = 0.65;
//	int low_border = 0.1;
//
//
//} OrderConfig;






// Ok
int _ParsePrice(const string& str) {
	string nstr{};
	for (size_t i = 0; i < str.size(); ++i) {
		if (str[i] == ',') {
			continue;
		}
		else {
			nstr.push_back(str[i]);
		}
	}

	if (nstr.empty()) {
		return -1;
	}

	for (const auto& el : nstr) {
		if (int(el) < 48 || int(el) > 57) {
			return -1;
		}
	}

	int price = stoi(nstr);
	return price;


}

// �� ������ ��
void _CheckPrice(DataBase& db, const set<set<string>>& Items,
	int city, bool flag) {

	Sleep(SLEEPING_TIME);

	LOG_DURATION("CheckPrice");

	string prev_name{};
	int prev_tier = -1;
	int prev_enchant = -1;
	int prev_price = -1;
	int position = 1;

	ScreenShot ss(1019, 367, 86, 18, "./img.png");

	// Main Loop
	for (const auto& item : Items) {
		cout << '[' << position << '/'
			<< Items.size() << ']' << endl;
		for (const auto& el : item) {
			_Item i = _ParseItem(el);
			_Info info;

			// flag = true - �������� ���� � ����� ������
			// flag = false - ������������� ������ ��� �������
			if (flag || !(db._isItemCorrect(i, 6))) {

				//����� �����
				if (i.name != prev_name) {

					CloseGameWindow();

					ClearItemName();
					MoveToInsertName();
					InsertItemName(i.name);

					SellBtn();

					prev_tier = -1;
					prev_enchant = -1;
				}
				// ����� ��������
				if (i.enchant != prev_enchant) {
					MoveToEnchantC(i.enchant);
				}
				// ����� ����
				if (i.tier != prev_tier) {
					if (CheckList(ListPlusThree, i.name) && i.enchant == 0) {
						MoveToTierC(i.tier + 3);
					}
					else if (CheckList(ListPlusTwo, i.name) && i.enchant == 0) {
						MoveToTierC(i.tier + 2);
					}
					else if (CheckList(ListPlusOne, i.name) && i.enchant == 0) {
						MoveToTierC(i.tier + 1);
					}
					else {
						MoveToTierC(i.tier);
					}
				}


				prev_name = i.name;
				prev_tier = i.tier;
				prev_enchant = i.enchant;

				int _price = ParseFromImg(ss, "output");
				while (_price == prev_price && _price != -1) {
					_price = ParseFromImg(ss, "output");
					cout << "Error: price don't change\n";
				}

				//link:

					//if (_price == prev_price && _price != -1) {
					//	goto link;
					//}

				prev_price = _price;
				info.price = _price;
				info.time = _GetCurrentTime();

				db._AddItem(i, city, info);
			}

		}
		++position;
	}
}

/*void _CheckPriceC(DataBase& db, bool flag) {
	Sleep(SLEEPING_TIME);
	LOG_DURATION("CheckPriceC");
	string prev_name{};
	int prev_tier = -1;
	int prev_enchant = -1;
	int prev_price = -1;
	int position = 1;

	ScreenShot ss(1019, 367, 86, 18, "./img.png");

	// Main Loop
	for (const auto& item : Items) {
		cout << '[' << position << '/'
			<< Items.size() << ']' << endl;
		for (const auto& el : item) {
			//system("cls");

			_Item i = _ParseItem(el);
			_Info info;

			// flag = true - �������� ���� � ����� ������
			// flag = false - ������������� ������ ��� �������
			if (flag || !(db._isItemCorrect(i, 6))) {

				if (i.name != prev_name) {
					SetCursorPos(937, 310);
					MouseLeftClick();

					ClearItemName();
					MoveToInsertName();
					InsertItemName(i.name);

					SetCursorPos(1280, 430);
					Sleep(100);
					MouseLeftClick();
					prev_tier = -1;
					prev_enchant = -1;
				}
				if (i.enchant != prev_enchant) {
					MoveToEnchantC(i.enchant);
				}
				if (i.tier != prev_tier) {
					if (CheckList(ListPlusTwo, i.name) && i.enchant == 0) {
						MoveToTierC(i.tier + 2);
					}
					else if (CheckList(ListPlusOne, i.name) && i.enchant == 0) {
						MoveToTierC(i.tier + 1);
					}
					else {
						MoveToTierC(i.tier);
					}
				}


				prev_name = i.name;
				prev_tier = i.tier;
				prev_enchant = i.enchant;

				Sleep(500);
			link:
				int _price = ParseFromImg(ss, "output");
				if (_price == prev_price && _price != -1) {
					goto link;
				}

				prev_price = _price;
				info.price = _price;
				info.time = _GetCurrentTime();

				db._AddItem(i, 6, info);
			}

		}
		++position;
	}
}*/
// ��
bool CheckList(const set <string>& List, const string& _name) {
	if (List.count(_name)) {
		return true;
	}
	return false;
}

// ��
int ParseFromImg(const ScreenShot& s_info, string txt_name) {
	Sleep(500);
	char _path[64];
	strcpy(_path, s_info.img_path.c_str());

	ScreenCapture(s_info.width, s_info.height,
		s_info.deltaX, s_info.deltaY, _path, NULL);

	Mat img = imread(s_info.img_path);

	imwrite(s_info.img_path, img);

	//resize(img, img, img.size(), 2, 2, INTER_LINEAR);

	string _oper = "tesseract ";
	_oper += string(s_info.img_path);
	_oper += ' ' + txt_name;
	char oper[256];
	strcpy(oper, _oper.c_str());

	system(oper);

	string str{};
	ifstream fin(txt_name + ".txt");
	getline(fin, str);
	fin.close();
	int _price = _ParsePrice(str);

	return _price;
}

// ��
bool CheckItemLimit(int tier, int enchant, int size_now) {
	if (tier == 6) {
		if (enchant == 0) {
			return size_now < ListItemLimit.at({ 6, 0 });
		}
		else if (enchant == 1) {
			return size_now < ListItemLimit.at({ 6, 1 });
		}
		else if (enchant == 2) {
			return size_now < ListItemLimit.at({ 6, 2 });
		}
	}
	else if (tier == 7) {
		if (enchant == 0) {
			return size_now < ListItemLimit.at({ 7, 0 });
		}
		else if (enchant == 1) {
			return size_now < ListItemLimit.at({ 7, 1 });
		}
		else if (enchant == 2) {
			return size_now < ListItemLimit.at({ 7, 2 });
		}
	}
	else if (tier == 8) {
		if (enchant == 0) {
			return size_now < ListItemLimit.at({ 8, 0 });
		}
		else if (enchant == 1) {
			return size_now < ListItemLimit.at({ 8, 1 });
		}
		else if (enchant == 2) {
			return size_now < ListItemLimit.at({ 8, 2 });
		}
	}
}

// ��
void PrintItemLimit(map<_Item, int>& ItemLimit) {
	cout << "Item Limit:\n";
	for (const auto& el : ItemLimit) {
		cout << el.first << ": " << el.second << endl;
	}
}

// ��
void PrintBoughtItems(map<_Item, map<int, int>>& item_bought) {
	for (const auto& el : item_bought) {
		vector<int> prices{};
		int Icount = 0;
		cout << "\t" << el.first << endl;
		for (const auto& item : el.second) {
			// cout << "[price: count]: " << item.first << ": " << item.second << endl;
			prices.push_back(item.first * item.second);
			Icount += item.second;
		}
		int sum = accumulate(prices.begin(), prices.end(), 0);
		cout << "Avg price: " << sum / Icount << 'x' << Icount << endl;
	}
}

// ��
void RefreshItemPrice() {
	const	int DELTAX = 86;
	const	int DELTAY = 18;
	char IMG_PATH[] = "./img.bmp";

	ScreenShot ss(901, 400, 28, 21, "./img.png");

	int prev_price = 0;

	while (true) {

		int date = ParseFromImg(ss, "output");

		if (date < 29) {
			prev_price = ParseFromImg({ 1054, 400,  86, 18, "./img.png" }, "output");
			cout << "prev_price = " << prev_price << endl;
			MoveToEdit();
			int _price = ParseFromImg({ 1019, 367 , 86, 18 , "./img.png" },
				"output");

			MoveToEditPrice();
			_price--;
			if (_price < prev_price * 0.9) {
				cout << "Price is so low" << endl;
				break;
			}
			string _string = to_string(_price);
			for (const auto& el : _string) {
				KeyBrdBtnPress(el);
			}

			UpdateOrder();
		}
		else {
			break;
		}
	}


}

// �� ��, ������ �� ��
void BuyItem(DataBase& db, const set<set<string>>& Items,
	map<_Item, int>& ItemLimit,
	map<_Item, map<int, int>>& item_bought, int profit) {

	ScreenShot ss(1019, 367, 86, 18, "./img_buy.png");
	ScreenShot ss1(1070, 420, 116, 22, "./img_buy.png");

	db._Sort(profit);
	db._PrintPrice(0);

	int prev_tier = -1, prev_enchant = -1;
	string prev_name = " ";
	string current_pos = " ";
	const map<int, map<_Item, map<int, _Info>>> sorted = db.GetDbSorted();

	for (auto iter = sorted.rbegin(); iter != sorted.rend(); ++iter) {

		for (const auto& item : iter->second) {

			for (const auto& el : item.second) {
				if (el.first != 6 &&
					(!ItemLimit.count(item.first) ||
						CheckItemLimit(item.first.tier, item.first.enchant, ItemLimit[item.first]))) {



					// ���� ���� �������� � ����� �� ���������
					if (ItemAndArtif.count(item.first.name)) {
						ClearItemName();
						InsertItemName(item.first.name);
						prev_tier = -1;
						prev_enchant = -1;

						if (current_pos != "sell") {
							ClickSellTab();
							current_pos = "sell";
						}

						MoveToTier(4);
						MoveToEnchant(0);
						int timesToBuy = 0;
						if (ItemLimit.count(item.first)) {
							timesToBuy = ListItemLimit.at({ item.first.tier, item.first.enchant }) - ItemLimit[item.first];
						}
						else {
							timesToBuy = ListItemLimit.at({ item.first.tier, item.first.enchant });
						}
						//int timesToBuy = GetTimesToBuy(item.first.tier, item.first.enchant);


						for (int i = 0; i < timesToBuy; ++i) {

							MoveToBuy();

							MoveToEnchantC(item.first.enchant);

							if (CheckList(ListPlusThree, item.first.name) && item.first.enchant == 0) {
								MoveToTierC(item.first.tier + 3);
							}
							else if (CheckList(ListPlusTwo, item.first.name) && item.first.enchant == 0) {
								MoveToTierC(item.first.tier + 2);
							}
							else if (CheckList(ListPlusOne, item.first.name) && item.first.enchant == 0) {
								MoveToTierC(item.first.tier + 1);
							}
							else {
								MoveToTierC(item.first.tier);
							}

							int _price = ParseFromImg(ss, "output_buy");

							if (_price == -1) {
								continue;
							}
							if (_price <= el.second.price * 1.02) {
								NoName1();
								MoveToBuy2();
								ItemLimit[item.first]++;
								item_bought[item.first][_price]++;
							}
							else {
								system("cls");
								db._EditItemPrice(item.first, el.first, _price);
								db._Calculate(Items, el.first);
								db._Sort(profit);
								CloseGameWindow();
								break;
							}
						}
					}

					// ���� ��� ��������� � ����� �� ���������
					else {

						int timesToBuy = 0;
						if (ItemLimit.count(item.first)) {
							timesToBuy = ListItemLimit.at({ item.first.tier, item.first.enchant }) - ItemLimit[item.first];
						}
						else {
							timesToBuy = ListItemLimit.at({ item.first.tier, item.first.enchant });
						}

						if (current_pos != "buy") {
							ClickBuyTab();
							current_pos = "buy";
						}

						// ���
						if (prev_enchant != item.first.enchant) {
							MoveToEnchant(item.first.enchant);
							prev_enchant = item.first.enchant;
						}
						// ���
						if (prev_tier != item.first.tier) {
							MoveToTier(item.first.tier);
							prev_tier = item.first.tier;
						}
						// ���
						if (ItemTwoName.count(item.first.name) && item.first.tier == 8) {
							ClearItemName();
							InsertItemName(ItemTwoName.at(item.first.name));
							prev_name = ItemTwoName.at(item.first.name);
						}
						else {
							if (prev_name != item.first.name) {
								ClearItemName();
								InsertItemName(item.first.name);
								prev_name = item.first.name;
							}
						}

						// ������
						for (int i = 0; i < timesToBuy; ++i) {

							int _price = ParseFromImg(ss1, "output_buy");

							if (_price == -1) {
								continue;
							}

							if (_price <= el.second.price * 1.02) {
								NoName2();
								MoveToBuy2();
								ItemLimit[item.first]++;
								item_bought[item.first][_price]++;
							}
							else {
								system("cls");
								db._EditItemPrice(item.first, el.first, _price);
								db._Calculate(Items, el.first);
								db._Sort(profit);
								break;
							}
						}

					}
				}
			}
		}

		PrintItemLimit(ItemLimit);
		cout << "Buying finished\n";
	}

}


void SellItem(int count) {

	/*string prev_name{};
	int prev_tier = -1;
	int prev_enchant = -1;
	int prev_price = -1;
	for (const auto& el : item_bought) {
		if (el.first.name != prev_name) {
			ClearItemName();
			MoveToInsertName();
			InsertItemName(el.first.name);

			prev_tier = -1;
			prev_enchant = -1;
		}
		if (el.first.enchant != prev_enchant) {
			MoveToEnchant(el.first.enchant);
		}
		if (el.first.tier != prev_tier) {
			MoveToTier(el.first.tier);
			if (el.first.tier == 8 && ItemTwoName.count(el.first.name)) {
				ClearItemName();
				MoveToInsertName();
				InsertItemName(ItemTwoName.at(el.first.name));
			}
		}

		prev_name = el.first.name;
		prev_tier = el.first.tier;
		prev_enchant = el.first.enchant;

		int counter = 0;
		for (const auto& item : el.second) {
			counter += item.second;
		}


		for (int _i = 0; _i < counter; ++_i) {

			SetCursorPos(1280, 430);
			MouseLeftClick();

			Sleep(100);
			SetCursorPos(847, 576);
			MouseLeftClick();
			KeyBrdBtnPress('1');

			int _price = ParseFromImg({ 1019, 367 , 86, 18 , "./img.png" },
				"output");
			if (_price == -1) {
				break;
			}
			_price--;
			MoveToEditPrice();
			string _string = to_string(_price);
			for (const auto& el : _string) {
				KeyBrdBtnPress(el);
			}
			UpdateOrder();

			item_sold[el.first][_price]++;
			Sleep(100);
		}
	}
	*/

	for (int i = 0; i < count; ++i) {

		NoName2();
		Sleep(30);

		PriceMinusOneSilver();
		Sleep(50);

		MoveToBuy2();
		Sleep(50);

	}

	system("cls");
	cout << "Selling finished!" << endl;

}


void OrderItem(DataBase& db, const set<set<string>>& Items) {

	int prev_tier = -1, prev_enchant = -1;
	int prev_price = -1;
	string prev_name = " ";

	ScreenShot ss(1260, 367, 86, 18, "./img.png");

	for (const auto& el : Items) {
	
		for (const auto& item : el) {

			_Item i = _ParseItem(item);
			string s_count = to_string(ListItemLimitOrder.at({ i.tier, i.enchant }));

			if (s_count != "0") {
				
				int BMprice = db.GetItemPriceDB(i);

				//����� �����
				if (i.name != prev_name) {

					// �������, ����� ������� ���� (���� �������)
					CloseGameWindow();

					ClearItemName();
					MoveToInsertName();
					InsertItemName(i.name);

					// ������ �������
					SellBtn();

					prev_tier = -1;
					prev_enchant = -1;
				}

				// ����� ��������
				if (i.enchant != prev_enchant) {
					MoveToEnchantC(i.enchant);
				}

				// ����� ����
				if (i.tier != prev_tier) {
					if (CheckList(ListPlusThree, i.name) && i.enchant == 0) {
						MoveToTierC(i.tier + 3);
					}
					else if (CheckList(ListPlusTwo, i.name) && i.enchant == 0) {
						MoveToTierC(i.tier + 2);
					}
					else if (CheckList(ListPlusOne, i.name) && i.enchant == 0) {
						MoveToTierC(i.tier + 1);
					}
					else {
						MoveToTierC(i.tier);
					}
				}



				prev_name = i.name;
				prev_tier = i.tier;
				prev_enchant = i.enchant;

				NoName3();

				int _price = ParseFromImg(ss, "output");


				while (_price == prev_price && _price != -1) {
					_price = ParseFromImg(ss, "output");
					cout << "Error: price don't change\n";
				}

				// ���� ���� ������ �� ��������� 10% �� ���� �� ������ �����, �� ����� �� ��������
				if (_price > BMprice * (1 - 0.1)) {
					continue;
				}
				else {


					prev_price = _price;

					ChooseCountOrder();



					for (const auto& el : s_count) {
						KeyBrdBtnPress(el);
					}


					// �������� ����


					if (_price < 0.65 * BMprice) {
						_price = 0.65 * BMprice;

						string s_price = to_string(_price);

						// ������� �� ������� ����� ����
						MoveToEditPrice();

						for (const auto& el : s_price) {
							KeyBrdBtnPress(el);
						}

					}
					else {
						PricePlusOneSilver();

					}

					MoveToBuy2();

					ConfirmBuy();

					ConfirmBuy2();

					MoveToBuy();
					prev_tier = -1;
					prev_enchant = -1;

				}
			}

		}
	}

	// ������� �� �������
	CloseGameWindow();

}


void RefreshOrder() {
	const	int DELTAX = 86;
	const	int DELTAY = 18;
	char IMG_PATH[] = "./img.bmp";

	ScreenShot ss(901, 400, 28, 21, "./img.png");

	int prev_price = 0;

	while (true) {

		int date = ParseFromImg(ss, "output");

		if (date < 29) {
			prev_price = ParseFromImg({ 1054, 400,  86, 18, "./img.png" }, "output");
			//cout << "prev_price = " << prev_price << endl;
			MoveToEdit();


			int _price = ParseFromImg({ 1260, 367 , 86, 18 , "./img.png" },
				"output");

			MoveToEditPrice();

			++_price;
			if (_price < prev_price * 1.1) {
				cout << "Price is so low" << endl;
				break;
			}
			string _string = to_string(_price);
			for (const auto& el : _string) {
				KeyBrdBtnPress(el);
			}

			UpdateOrder();
		}
		else {
			break;
		}
	}


}



