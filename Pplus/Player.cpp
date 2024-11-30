#include <iostream>
#include "Sword.cpp"
#include "Armor.cpp"
#include "Food.cpp"
#include "Entity.cpp"

class Player : public Entity {

private:
	Sword sword;
	Armor armor;
	Food foods[3];
public:
	Player(std::string p_name, unsigned p_hp, Sword p_sword, Armor p_armor, Food p_foods[3])
		: Entity(p_name, p_hp) {
		sword = p_sword;
		armor = p_armor;
	}
};