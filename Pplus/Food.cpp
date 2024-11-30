#include <iostream>
#include "Item.cpp"

class Food : public Item {

private:
	std::string TypeItem = "≈‰‡";
	unsigned recovery;
	unsigned count;

public:
	Food(std::string p_title, unsigned p_price, unsigned p_recovery, unsigned p_count)
		: Item(p_title, p_price) {
		recovery = p_recovery;
		count = p_count;
	}
};