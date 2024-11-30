#include <iostream>
#include "Item.cpp"

class Armor : public Item {

private:
	std::string TypeItem = "Броня";
	unsigned defense;
	unsigned durability;

public:
	Armor(std::string p_title, unsigned p_price, unsigned p_defense, unsigned p_durability)
		: Item(p_title, p_price) {
		defense = p_defense;
		durability = p_durability;
	}
};