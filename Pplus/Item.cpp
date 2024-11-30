#include <iostream>

class Item {

private:
	std::string title;
	unsigned price;

public: 
	Item(std::string p_title, unsigned p_price) {
		title = p_title;
		price = p_price;
	}
};