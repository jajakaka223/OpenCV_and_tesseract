#pragma once
#include <set>
#include <string>
#include <iostream>
#include <sstream>
#include <map>

#pragma once
#include "Item.h"

using namespace std;

// ������ ��������� ������� ����� �����������


const set<string> Curse = {
	/*"Cursed-Staff 6.0",
	"Cursed-Staff 6.1",
	"Cursed-Staff 6.2",
	"Cursed-Staff 7.0",
	"Cursed-Staff 7.1",
	"Cursed-Staff 7.2",
	"Cursed-Staff 8.0",
	"Cursed-Staff 8.1",
	"Cursed-Staff 8.2",*/

	"Great-Cursed-Staff 6.0",
	"Great-Cursed-Staff 6.1",
	"Great-Cursed-Staff 6.2",
	"Great-Cursed-Staff 7.0",
	"Great-Cursed-Staff 7.1",
	"Great-Cursed-Staff 7.2",
	"Great-Cursed-Staff 8.0",
	"Great-Cursed-Staff 8.1",
	"Great-Cursed-Staff 8.2",

	"Demonic-Staff 6.0",
	"Demonic-Staff 6.1",
	"Demonic-Staff 6.2",
	"Demonic-Staff 7.0",
	"Demonic-Staff 7.1",
	"Demonic-Staff 7.2",
	"Demonic-Staff 8.0",
	"Demonic-Staff 8.1",
	"Demonic-Staff 8.2",

	"Lifecurse-Staff 6.0",
	"Lifecurse-Staff 6.1",
	"Lifecurse-Staff 6.2",
	"Lifecurse-Staff 7.0",
	"Lifecurse-Staff 7.1",
	"Lifecurse-Staff 7.2",
	"Lifecurse-Staff 8.0",
	"Lifecurse-Staff 8.1",
	"Lifecurse-Staff 8.2",
};

const set<string> Arcane = {
	/*"Arcane-Staff 6.0",
	"Arcane-Staff 6.1",
	"Arcane-Staff 6.2",
	"Arcane-Staff 7.0",
	"Arcane-Staff 7.1",
	"Arcane-Staff 7.2",
	"Arcane-Staff 8.0",
	"Arcane-Staff 8.1",
	"Arcane-Staff 8.2",*/

	"Great-Arcane-Staff 6.0",
	"Great-Arcane-Staff 6.1",
	"Great-Arcane-Staff 6.2",
	"Great-Arcane-Staff 7.0",
	"Great-Arcane-Staff 7.1",
	"Great-Arcane-Staff 7.2",
	"Great-Arcane-Staff 8.0",
	"Great-Arcane-Staff 8.1",
	"Great-Arcane-Staff 8.2",

	"Enigmatic-Staff 6.0",
	"Enigmatic-Staff 6.1",
	"Enigmatic-Staff 6.2",
	"Enigmatic-Staff 7.0",
	"Enigmatic-Staff 7.1",
	"Enigmatic-Staff 7.2",
	"Enigmatic-Staff 8.0",
	"Enigmatic-Staff 8.1",
	"Enigmatic-Staff 8.2",

	"Witchwork-Staff 6.0",
	"Witchwork-Staff 6.1",
	"Witchwork-Staff 6.2",
	"Witchwork-Staff 7.0",
	"Witchwork-Staff 7.1",
	"Witchwork-Staff 7.2",
	"Witchwork-Staff 8.0",
	"Witchwork-Staff 8.1",
	"Witchwork-Staff 8.2",
};

const set<string> Fire = {
	/*"Fire-Staff 6.0",
	"Fire-Staff 6.1",
	"Fire-Staff 6.2",
	"Fire-Staff 7.0",
	"Fire-Staff 7.1",
	"Fire-Staff 7.2",
	"Fire-Staff 8.0",
	"Fire-Staff 8.1",
	"Fire-Staff 8.2",*/

	"Great-Fire-Staff 6.0",
	"Great-Fire-Staff 6.1",
	"Great-Fire-Staff 6.2",
	"Great-Fire-Staff 7.0",
	"Great-Fire-Staff 7.1",
	"Great-Fire-Staff 7.2",
	"Great-Fire-Staff 8.0",
	"Great-Fire-Staff 8.1",
	"Great-Fire-Staff 8.2",

	"Infernal-Staff 6.0",
	"Infernal-Staff 6.1",
	"Infernal-Staff 6.2",
	"Infernal-Staff 7.0",
	"Infernal-Staff 7.1",
	"Infernal-Staff 7.2",
	"Infernal-Staff 8.0",
	"Infernal-Staff 8.1",
	"Infernal-Staff 8.2",

	/*"Wildfire-Staff 6.0",
	"Wildfire-Staff 6.1",
	"Wildfire-Staff 6.2",
	"Wildfire-Staff 7.0",
	"Wildfire-Staff 7.1",
	"Wildfire-Staff 7.2",
	"Wildfire-Staff 8.0",
	"Wildfire-Staff 8.1",
	"Wildfire-Staff 8.2",*/
};

const set<string> Frost = {
	/*"Frost-Staff 6.0",
	"Frost-Staff 6.1",
	"Frost-Staff 6.2",
	"Frost-Staff 7.0",
	"Frost-Staff 7.1",
	"Frost-Staff 7.2",
	"Frost-Staff 8.0",
	"Frost-Staff 8.1",
	"Frost-Staff 8.2",*/

	"Great-Frost-Staff 6.0",
	"Great-Frost-Staff 6.1",
	"Great-Frost-Staff 6.2",
	"Great-Frost-Staff 7.0",
	"Great-Frost-Staff 7.1",
	"Great-Frost-Staff 7.2",
	"Great-Frost-Staff 8.0",
	"Great-Frost-Staff 8.1",
	"Great-Frost-Staff 8.2",

	"Glacial-Staff 6.0",
	"Glacial-Staff 6.1",
	"Glacial-Staff 6.2",
	"Glacial-Staff 7.0",
	"Glacial-Staff 7.1",
	"Glacial-Staff 7.2",
	"Glacial-Staff 8.0",
	"Glacial-Staff 8.1",
	"Glacial-Staff 8.2",

	/*"Hoarfrost-Staff 6.0",
	"Hoarfrost-Staff 6.1",
	"Hoarfrost-Staff 6.2",
	"Hoarfrost-Staff 7.0",
	"Hoarfrost-Staff 7.1",
	"Hoarfrost-Staff 7.2",
	"Hoarfrost-Staff 8.0",
	"Hoarfrost-Staff 8.1",
	"Hoarfrost-Staff 8.2",*/
};

const set<string> Holy = {
	/*"Holy-Staff 6.0",
	"Holy-Staff 6.1",
	"Holy-Staff 6.2",
	"Holy-Staff 7.0",
	"Holy-Staff 7.1",
	"Holy-Staff 7.2",
	"Holy-Staff 8.0",
	"Holy-Staff 8.1",
	"Holy-Staff 8.2",*/

	"Great-Holy-Staff 6.0",
	"Great-Holy-Staff 6.1",
	"Great-Holy-Staff 6.2",
	"Great-Holy-Staff 7.0",
	"Great-Holy-Staff 7.1",
	"Great-Holy-Staff 7.2",
	"Great-Holy-Staff 8.0",
	"Great-Holy-Staff 8.1",
	"Great-Holy-Staff 8.2",

	"Divine-Staff 6.0",
	"Divine-Staff 6.1",
	"Divine-Staff 6.2",
	"Divine-Staff 7.0",
	"Divine-Staff 7.1",
	"Divine-Staff 7.2",
	"Divine-Staff 8.0",
	"Divine-Staff 8.1",
	"Divine-Staff 8.2",

	/*"Lifetouch-Staff 6.0",
	"Lifetouch-Staff 6.1",
	"Lifetouch-Staff 6.2",
	"Lifetouch-Staff 7.0",
	"Lifetouch-Staff 7.1",
	"Lifetouch-Staff 7.2",
	"Lifetouch-Staff 8.0",
	"Lifetouch-Staff 8.1",
	"Lifetouch-Staff 8.2",*/
};

const set<string> Nature = {
	/*"Nature-Staff 6.0",
	"Nature-Staff 6.1",
	"Nature-Staff 6.2",
	"Nature-Staff 7.0",
	"Nature-Staff 7.1",
	"Nature-Staff 7.2",
	"Nature-Staff 8.0",
	"Nature-Staff 8.1",
	"Nature-Staff 8.2",*/

	"Great-Nature-Staff 6.0",
	"Great-Nature-Staff 6.1",
	"Great-Nature-Staff 6.2",
	"Great-Nature-Staff 7.0",
	"Great-Nature-Staff 7.1",
	"Great-Nature-Staff 7.2",
	"Great-Nature-Staff 8.0",
	"Great-Nature-Staff 8.1",
	"Great-Nature-Staff 8.2",

	"Wild-Staff 6.0",
	"Wild-Staff 6.1",
	"Wild-Staff 6.2",
	"Wild-Staff 7.0",
	"Wild-Staff 7.1",
	"Wild-Staff 7.2",
	"Wild-Staff 8.0",
	"Wild-Staff 8.1",
	"Wild-Staff 8.2",

	"Druidic-Staff 6.0",
	"Druidic-Staff 6.1",
	"Druidic-Staff 6.2",
	"Druidic-Staff 7.0",
	"Druidic-Staff 7.1",
	"Druidic-Staff 7.2",
	"Druidic-Staff 8.0",
	"Druidic-Staff 8.1",
	"Druidic-Staff 8.2",
};


const set<string> Axe = {
	"Battleaxe 6.0",
	"Battleaxe 6.1",
	"Battleaxe 6.2",
	"Battleaxe 7.0",
	"Battleaxe 7.1",
	"Battleaxe 7.2",
	"Battleaxe 8.0",
	"Battleaxe 8.1",
	"Battleaxe 8.2",

	"Greataxe 6.0",
	"Greataxe 6.1",
	"Greataxe 6.2",
	"Greataxe 7.0",
	"Greataxe 7.1",
	"Greataxe 7.2",
	"Greataxe 8.0",
	"Greataxe 8.1",
	"Greataxe 8.2",

	"Halberd 6.0",
	"Halberd 6.1",
	"Halberd 6.2",
	"Halberd 7.0",
	"Halberd 7.1",
	"Halberd 7.2",
	"Halberd 8.0",
	"Halberd 8.1",
	"Halberd 8.2",

	"Carrioncaller 6.0",
	"Carrioncaller 6.1",
	"Carrioncaller 6.2",
	"Carrioncaller 7.0",
	"Carrioncaller 7.1",
	"Carrioncaller 7.2",
	"Carrioncaller 8.0",
	"Carrioncaller 8.1",
	"Carrioncaller 8.2",
};

const set<string> Dagger = {
	/*"Dagger 6.0",
	"Dagger 6.1",
	"Dagger 6.2",
	"Dagger 7.0",
	"Dagger 7.1",
	"Dagger 7.2",
	"Dagger 8.0",
	"Dagger 8.1",
	"Dagger 8.2",*/

	"Dagger-Pair 6.0",
	"Dagger-Pair 6.1",
	"Dagger-Pair 6.2",
	"Dagger-Pair 7.0",
	"Dagger-Pair 7.1",
	"Dagger-Pair 7.2",
	"Dagger-Pair 8.0",
	"Dagger-Pair 8.1",
	"Dagger-Pair 8.2",

	"Claws 6.0",
	"Claws 6.1",
	"Claws 6.2",
	"Claws 7.0",
	"Claws 7.1",
	"Claws 7.2",
	"Claws 8.0",
	"Claws 8.1",
	"Claws 8.2",

	/*"Bloodletter 6.0",
	"Bloodletter 6.1",
	"Bloodletter 6.2",
	"Bloodletter 7.0",
	"Bloodletter 7.1",
	"Bloodletter 7.2",
	"Bloodletter 8.0",
	"Bloodletter 8.1",
	"Bloodletter 8.2",*/
};

const set<string> Hammer = {
	/*"Hammer 6.0",
	"Hammer 6.1",
	"Hammer 6.2",
	"Hammer 7.0",
	"Hammer 7.1",
	"Hammer 7.2",
	"Hammer 8.0",
	"Hammer 8.1",
	"Hammer 8.2",*/

	"Polehammer 6.0",
	"Polehammer 6.1",
	"Polehammer 6.2",
	"Polehammer 7.0",
	"Polehammer 7.1",
	"Polehammer 7.2",
	"Polehammer 8.0",
	"Polehammer 8.1",
	"Polehammer 8.2",

	"Great-Hammer 6.0",
	"Great-Hammer 6.1",
	"Great-Hammer 6.2",
	"Great-Hammer 7.0",
	"Great-Hammer 7.1",
	"Great-Hammer 7.2",
	"Great-Hammer 8.0",
	"Great-Hammer 8.1",
	"Great-Hammer 8.2",

	"Tombhammer 6.0",
	"Tombhammer 6.1",
	"Tombhammer 6.2",
	"Tombhammer 7.0",
	"Tombhammer 7.1",
	"Tombhammer 7.2",
	"Tombhammer 8.0",
	"Tombhammer 8.1",
	"Tombhammer 8.2",
};

const set<string> Mace = {
	/*"Mace 6.0",
	"Mace 6.1",
	"Mace 6.2",
	"Mace 7.0",
	"Mace 7.1",
	"Mace 7.2",
	"Mace 8.0",
	"Mace 8.1",
	"Mace 8.2",*/

	"Heavy-Mace 6.0",
	"Heavy-Mace 6.1",
	"Heavy-Mace 6.2",
	"Heavy-Mace 7.0",
	"Heavy-Mace 7.1",
	"Heavy-Mace 7.2",
	"Heavy-Mace 8.0",
	"Heavy-Mace 8.1",
	"Heavy-Mace 8.2",

	"Morning-Star 6.0",
	"Morning-Star 6.1",
	"Morning-Star 6.2",
	"Morning-Star 7.0",
	"Morning-Star 7.1",
	"Morning-Star 7.2",
	"Morning-Star 8.0",
	"Morning-Star 8.1",
	"Morning-Star 8.2",

	"Bedrock-Mace 6.0",
	"Bedrock-Mace 6.1",
	"Bedrock-Mace 6.2",
	"Bedrock-Mace 7.0",
	"Bedrock-Mace 7.1",
	"Bedrock-Mace 7.2",
	"Bedrock-Mace 8.0",
	"Bedrock-Mace 8.1",
	"Bedrock-Mace 8.2",
};

const set<string> Sword = {
	"Broadsword 6.0",
	"Broadsword 6.1",
	"Broadsword 6.2",
	"Broadsword 7.0",
	"Broadsword 7.1",
	"Broadsword 7.2",
	"Broadsword 8.0",
	"Broadsword 8.1",
	"Broadsword 8.2",

	"Claymore 6.0",
	"Claymore 6.1",
	"Claymore 6.2",
	"Claymore 7.0",
	"Claymore 7.1",
	"Claymore 7.2",
	"Claymore 8.0",
	"Claymore 8.1",
	"Claymore 8.2",

	"Dual-Swords 6.0",
	"Dual-Swords 6.1",
	"Dual-Swords 6.2",
	"Dual-Swords 7.0",
	"Dual-Swords 7.1",
	"Dual-Swords 7.2",
	"Dual-Swords 8.0",
	"Dual-Swords 8.1",
	"Dual-Swords 8.2",

	"Clarent-Blade 6.0",
	"Clarent-Blade 6.1",
	"Clarent-Blade 6.2",
	"Clarent-Blade 7.0",
	"Clarent-Blade 7.1",
	"Clarent-Blade 7.2",
	"Clarent-Blade 8.0",
	"Clarent-Blade 8.1",
	"Clarent-Blade 8.2",

};


const set<string> OffHand = {

	"Tome-of-Spells 6.0",
	"Tome-of-Spells 6.1",
	"Tome-of-Spells 6.2",
	"Tome-of-Spells 7.0",
	"Tome-of-Spells 7.1",
	"Tome-of-Spells 7.2",
	"Tome-of-Spells 8.0",
	"Tome-of-Spells 8.1",
	"Tome-of-Spells 8.2",

	"Shield 6.0",
	"Shield 6.1",
	"Shield 6.2",
	"Shield 7.0",
	"Shield 7.1",
	"Shield 7.2",
	"Shield 8.0",
	"Shield 8.1",
	"Shield 8.2",

	"Sarcophagus 6.0",
	"Sarcophagus 6.1",
	"Sarcophagus 6.2",
	"Sarcophagus 7.0",
	"Sarcophagus 7.1",
	"Sarcophagus 7.2",
	"Sarcophagus 8.0",
	"Sarcophagus 8.1",
	"Sarcophagus 8.2",

	"Torch 6.0",
	"Torch 6.1",
	"Torch 6.2",
	"Torch 7.0",
	"Torch 7.1",
	"Torch 7.2",
	"Torch 8.0",
	"Torch 8.1",
	"Torch 8.2",

};


const set<string> Cowl = {
	"Scholar-Cowl 6.0",
	"Scholar-Cowl 6.1",
	"Scholar-Cowl 6.2",
	"Scholar-Cowl 7.0",
	"Scholar-Cowl 7.1",
	"Scholar-Cowl 7.2",
	"Scholar-Cowl 8.0",
	"Scholar-Cowl 8.1",
	"Scholar-Cowl 8.2",

	"Cleric-Cowl 6.0",
	"Cleric-Cowl 6.1",
	"Cleric-Cowl 6.2",
	"Cleric-Cowl 7.0",
	"Cleric-Cowl 7.1",
	"Cleric-Cowl 7.2",
	"Cleric-Cowl 8.0",
	"Cleric-Cowl 8.1",
	"Cleric-Cowl 8.2",

	"Mage-Cowl 6.0",
	"Mage-Cowl 6.1",
	"Mage-Cowl 6.2",
	"Mage-Cowl 7.0",
	"Mage-Cowl 7.1",
	"Mage-Cowl 7.2",
	"Mage-Cowl 8.0",
	"Mage-Cowl 8.1",
	"Mage-Cowl 8.2",

	"Druid-Cowl 6.0",
	"Druid-Cowl 6.1",
	"Druid-Cowl 6.2",
	"Druid-Cowl 7.0",
	"Druid-Cowl 7.1",
	"Druid-Cowl 7.2",
	"Druid-Cowl 8.0",
	"Druid-Cowl 8.1",
	"Druid-Cowl 8.2",
};

const set<string> Robe = {
	"Scholar-Robe 6.0",
	"Scholar-Robe 6.1",
	"Scholar-Robe 6.2",
	"Scholar-Robe 7.0",
	"Scholar-Robe 7.1",
	"Scholar-Robe 7.2",
	"Scholar-Robe 8.0",
	"Scholar-Robe 8.1",
	"Scholar-Robe 8.2",

	"Cleric-Robe 6.0",
	"Cleric-Robe 6.1",
	"Cleric-Robe 6.2",
	"Cleric-Robe 7.0",
	"Cleric-Robe 7.1",
	"Cleric-Robe 7.2",
	"Cleric-Robe 8.0",
	"Cleric-Robe 8.1",
	"Cleric-Robe 8.2",

	"Mage-Robe 6.0",
	"Mage-Robe 6.1",
	"Mage-Robe 6.2",
	"Mage-Robe 7.0",
	"Mage-Robe 7.1",
	"Mage-Robe 7.2",
	"Mage-Robe 8.0",
	"Mage-Robe 8.1",
	"Mage-Robe 8.2",

	"Druid-Robe 6.0",
	"Druid-Robe 6.1",
	"Druid-Robe 6.2",
	"Druid-Robe 7.0",
	"Druid-Robe 7.1",
	"Druid-Robe 7.2",
	"Druid-Robe 8.0",
	"Druid-Robe 8.1",
	"Druid-Robe 8.2",
};

const set<string> Sandals = {
	"Scholar-Sandals 6.0",
	"Scholar-Sandals 6.1",
	"Scholar-Sandals 6.2",
	"Scholar-Sandals 7.0",
	"Scholar-Sandals 7.1",
	"Scholar-Sandals 7.2",
	"Scholar-Sandals 8.0",
	"Scholar-Sandals 8.1",
	"Scholar-Sandals 8.2",

	"Cleric-Sandals 6.0",
	"Cleric-Sandals 6.1",
	"Cleric-Sandals 6.2",
	"Cleric-Sandals 7.0",
	"Cleric-Sandals 7.1",
	"Cleric-Sandals 7.2",
	"Cleric-Sandals 8.0",
	"Cleric-Sandals 8.1",
	"Cleric-Sandals 8.2",

	"Mage-Sandals 6.0",
	"Mage-Sandals 6.1",
	"Mage-Sandals 6.2",
	"Mage-Sandals 7.0",
	"Mage-Sandals 7.1",
	"Mage-Sandals 7.2",
	"Mage-Sandals 8.0",
	"Mage-Sandals 8.1",
	"Mage-Sandals 8.2",

	"Druid-Sandals 6.0",
	"Druid-Sandals 6.1",
	"Druid-Sandals 6.2",
	"Druid-Sandals 7.0",
	"Druid-Sandals 7.1",
	"Druid-Sandals 7.2",
	"Druid-Sandals 8.0",
	"Druid-Sandals 8.1",
	"Druid-Sandals 8.2",
};


const set<string> Hood = {
	"Stalker-Hood 6.0",
	"Stalker-Hood 6.1",
	"Stalker-Hood 6.2",
	"Stalker-Hood 7.0",
	"Stalker-Hood 7.1",
	"Stalker-Hood 7.2",
	"Stalker-Hood 8.0",
	"Stalker-Hood 8.1",
	"Stalker-Hood 8.2",

	"Mercenary-Hood 6.0",
	"Mercenary-Hood 6.1",
	"Mercenary-Hood 6.2",
	"Mercenary-Hood 7.0",
	"Mercenary-Hood 7.1",
	"Mercenary-Hood 7.2",
	"Mercenary-Hood 8.0",
	"Mercenary-Hood 8.1",
	"Mercenary-Hood 8.2",

	"Hunter-Hood 6.0",
	"Hunter-Hood 6.1",
	"Hunter-Hood 6.2",
	"Hunter-Hood 7.0",
	"Hunter-Hood 7.1",
	"Hunter-Hood 7.2",
	"Hunter-Hood 8.0",
	"Hunter-Hood 8.1",
	"Hunter-Hood 8.2",

	"Assassin-Hood 6.0",
	"Assassin-Hood 6.1",
	"Assassin-Hood 6.2",
	"Assassin-Hood 7.0",
	"Assassin-Hood 7.1",
	"Assassin-Hood 7.2",
	"Assassin-Hood 8.0",
	"Assassin-Hood 8.1",
	"Assassin-Hood 8.2",
};

const set<string> Jacket = {

	"Stalker-Jacket 6.0",
	"Stalker-Jacket 6.1",
	"Stalker-Jacket 6.2",
	"Stalker-Jacket 7.0",
	"Stalker-Jacket 7.1",
	"Stalker-Jacket 7.2",
	"Stalker-Jacket 8.0",
	"Stalker-Jacket 8.1",
	"Stalker-Jacket 8.2",

	"Mercenary-Jacket 6.0",
	"Mercenary-Jacket 6.1",
	"Mercenary-Jacket 6.2",
	"Mercenary-Jacket 7.0",
	"Mercenary-Jacket 7.1",
	"Mercenary-Jacket 7.2",
	"Mercenary-Jacket 8.0",
	"Mercenary-Jacket 8.1",
	"Mercenary-Jacket 8.2",

	"Hunter-Jacket 6.0",
	"Hunter-Jacket 6.1",
	"Hunter-Jacket 6.2",
	"Hunter-Jacket 7.0",
	"Hunter-Jacket 7.1",
	"Hunter-Jacket 7.2",
	"Hunter-Jacket 8.0",
	"Hunter-Jacket 8.1",
	"Hunter-Jacket 8.2",

	"Assassin-Jacket 6.0",
	"Assassin-Jacket 6.1",
	"Assassin-Jacket 6.2",
	"Assassin-Jacket 7.0",
	"Assassin-Jacket 7.1",
	"Assassin-Jacket 7.2",
	"Assassin-Jacket 8.0",
	"Assassin-Jacket 8.1",
	"Assassin-Jacket 8.2",

};

const set<string> Shoes = {

	"Stalker-Shoes 6.0",
	"Stalker-Shoes 6.1",
	"Stalker-Shoes 6.2",
	"Stalker-Shoes 7.0",
	"Stalker-Shoes 7.1",
	"Stalker-Shoes 7.2",
	"Stalker-Shoes 8.0",
	"Stalker-Shoes 8.1",
	"Stalker-Shoes 8.2",

	"Mercenary-Shoes 6.0",
	"Mercenary-Shoes 6.1",
	"Mercenary-Shoes 6.2",
	"Mercenary-Shoes 7.0",
	"Mercenary-Shoes 7.1",
	"Mercenary-Shoes 7.2",
	"Mercenary-Shoes 8.0",
	"Mercenary-Shoes 8.1",
	"Mercenary-Shoes 8.2",

	"Hunter-Shoes 6.0",
	"Hunter-Shoes 6.1",
	"Hunter-Shoes 6.2",
	"Hunter-Shoes 7.0",
	"Hunter-Shoes 7.1",
	"Hunter-Shoes 7.2",
	"Hunter-Shoes 8.0",
	"Hunter-Shoes 8.1",
	"Hunter-Shoes 8.2",

	"Assassin-Shoes 6.0",
	"Assassin-Shoes 6.1",
	"Assassin-Shoes 6.2",
	"Assassin-Shoes 7.0",
	"Assassin-Shoes 7.1",
	"Assassin-Shoes 7.2",
	"Assassin-Shoes 8.0",
	"Assassin-Shoes 8.1",
	"Assassin-Shoes 8.2",

};


const set<string> Helmet = {

	"Soldier-Helmet 6.0",
	"Soldier-Helmet 6.1",
	"Soldier-Helmet 6.2",
	"Soldier-Helmet 7.0",
	"Soldier-Helmet 7.1",
	"Soldier-Helmet 7.2",
	"Soldier-Helmet 8.0",
	"Soldier-Helmet 8.1",
	"Soldier-Helmet 8.2",

	"Knight-Helmet 6.0",
	"Knight-Helmet 6.1",
	"Knight-Helmet 6.2",
	"Knight-Helmet 7.0",
	"Knight-Helmet 7.1",
	"Knight-Helmet 7.2",
	"Knight-Helmet 8.0",
	"Knight-Helmet 8.1",
	"Knight-Helmet 8.2",

	"Guardian-Helmet 6.0",
	"Guardian-Helmet 6.1",
	"Guardian-Helmet 6.2",
	"Guardian-Helmet 7.0",
	"Guardian-Helmet 7.1",
	"Guardian-Helmet 7.2",
	"Guardian-Helmet 8.0",
	"Guardian-Helmet 8.1",
	"Guardian-Helmet 8.2",

	"Graveguard-Helmet 6.0",
	"Graveguard-Helmet 6.1",
	"Graveguard-Helmet 6.2",
	"Graveguard-Helmet 7.0",
	"Graveguard-Helmet 7.1",
	"Graveguard-Helmet 7.2",
	"Graveguard-Helmet 8.0",
	"Graveguard-Helmet 8.1",
	"Graveguard-Helmet 8.2",

};

const set<string> Armor = {
	"Soldier-Armor 6.0",
	"Soldier-Armor 6.1",
	"Soldier-Armor 6.2",
	"Soldier-Armor 7.0",
	"Soldier-Armor 7.1",
	"Soldier-Armor 7.2",
	"Soldier-Armor 8.0",
	"Soldier-Armor 8.1",
	"Soldier-Armor 8.2",

	"Knight-Armor 6.0",
	"Knight-Armor 6.1",
	"Knight-Armor 6.2",
	"Knight-Armor 7.0",
	"Knight-Armor 7.1",
	"Knight-Armor 7.2",
	"Knight-Armor 8.0",
	"Knight-Armor 8.1",
	"Knight-Armor 8.2",

	"Guardian-Armor 6.0",
	"Guardian-Armor 6.1",
	"Guardian-Armor 6.2",
	"Guardian-Armor 7.0",
	"Guardian-Armor 7.1",
	"Guardian-Armor 7.2",
	"Guardian-Armor 8.0",
	"Guardian-Armor 8.1",
	"Guardian-Armor 8.2",

	"Graveguard-Armor 6.0",
	"Graveguard-Armor 6.1",
	"Graveguard-Armor 6.2",
	"Graveguard-Armor 7.0",
	"Graveguard-Armor 7.1",
	"Graveguard-Armor 7.2",
	"Graveguard-Armor 8.0",
	"Graveguard-Armor 8.1",
	"Graveguard-Armor 8.2",
};

const set<string> Boots = {
	"Soldier-Boots 6.0",
	"Soldier-Boots 6.1",
	"Soldier-Boots 6.2",
	"Soldier-Boots 7.0",
	"Soldier-Boots 7.1",
	"Soldier-Boots 7.2",
	"Soldier-Boots 8.0",
	"Soldier-Boots 8.1",
	"Soldier-Boots 8.2",

	"Knight-Boots 6.0",
	"Knight-Boots 6.1",
	"Knight-Boots 6.2",
	"Knight-Boots 7.0",
	"Knight-Boots 7.1",
	"Knight-Boots 7.2",
	"Knight-Boots 8.0",
	"Knight-Boots 8.1",
	"Knight-Boots 8.2",

	"Guardian-Boots 6.0",
	"Guardian-Boots 6.1",
	"Guardian-Boots 6.2",
	"Guardian-Boots 7.0",
	"Guardian-Boots 7.1",
	"Guardian-Boots 7.2",
	"Guardian-Boots 8.0",
	"Guardian-Boots 8.1",
	"Guardian-Boots 8.2",

	"Graveguard-Boots 6.0",
	"Graveguard-Boots 6.1",
	"Graveguard-Boots 6.2",
	"Graveguard-Boots 7.0",
	"Graveguard-Boots 7.1",
	"Graveguard-Boots 7.2",
	"Graveguard-Boots 8.0",
	"Graveguard-Boots 8.1",
	"Graveguard-Boots 8.2",
};


const set<string> Bag = {
	"Bag 6.0",
	"Bag 6.1",
	"Bag 6.2",
	"Bag 7.0",
	"Bag 7.1",
	"Bag 7.2",
	"Bag 8.0",
	"Bag 8.1",
	"Bag 8.2",
};

const set<string> SatchelOfInsight = {
	"Satchel-of-Insight 6.0",
	"Satchel-of-Insight 6.1",
	"Satchel-of-Insight 6.2",
	"Satchel-of-Insight 7.0",
	"Satchel-of-Insight 7.1",
	"Satchel-of-Insight 7.2",
	"Satchel-of-Insight 8.0",
	"Satchel-of-Insight 8.1",
	"Satchel-of-Insight 8.2",
};

//
//const set<set<string>> Items = {
//
//	//Fire,
//	//Frost,
//	//Holy,
//	//Arcane,
//	//Nature,
//	//Curse,
//
//	//Axe,
//	//Dagger,
//	//Mace,
//	//Hammer,
//
//	//Cowl,
//	//Robe,
//	//Sandals,
//
//	//Helmet,
//	Armor,
//	//Boots,
//
//	//Hood,
//	//Jacket,
//	//Shoes,
//
//	//SatchelOfInsight,
//	//Bag,
//};


// ������ ��������� � ������� ���� ��� ���� 4
const set <string> ListPlusTwo = {
	"Scholar Robe",
	"Scholar Cowl",
	"Scholar Sandals",

	"Soldier Helmet",
	"Soldier Armor",
	"Soldier Boots",

	"Fire Staff",

	"Tome of Spells",

	"Bow",


	"Bag",
};

const set <string> ListPlusOne = {

	"Battleaxe",
	"Dagger",
	"Hammer",
	"Mace",
	"Spear",
	"Torch",
	"Crossbow",

};

const set <string> ListPlusThree = {

	"Mercenary Hood",
	"Mercenary Jacket",
	"Mercenary Shoes",
	"Broadsword",
	"Shield",

};

const map <string, string> ItemTwoName = {
	{"Great Fire Staff", "Vendetta's Wrath"},
	{"Greataxe", "Hand Of Khor"},
	{"Tome of Spells", "Rosalia's Diary"},
};

const set<string> ItemAndArtif = {
	"Halberd",

};


// ����� ���������

const map <pair<int, int>, int> ListItemLimit = {
	{{6, 0} , 20},
	{{6, 1} , 15},
	{{6, 2} , 5},

	{{7, 0} , 15},
	{{7, 1}, 10},
	{{7, 2}, 1},

	{{8, 0}, 10},
	{{8, 1}, 3},
	{{8, 2}, 1},
};

const map <pair<int, int>, int> ListItemLimitOrder = {
	{{6, 0} , 5},
	{{6, 1} , 2},
	{{6, 2} , 1},

	{{7, 0}, 3},
	{{7, 1}, 2},
	{{7, 2}, 1},

	{{8, 0}, 2},
	{{8, 1}, 1},
	{{8, 2}, 0},
};



