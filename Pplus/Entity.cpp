#include <iostream>

class Entity {

private:
	unsigned hp;
	std::string name;
public:
	Entity(std::string p_name, unsigned p_hp){
		name = p_name;
		hp = p_hp;
	}
};