#include <iostream>
#include "Item.cpp"

class Sword : public Item {

private:
	std::string TypeItem = "Μεχ";
	unsigned damage;
	unsigned durability;

public:
	Sword(std::string p_title, unsigned p_price, unsigned p_damage, unsigned p_durability)
		: Item(p_title, p_price) {
		damage = p_damage;
		durability = p_durability;
	}
};