#include <iostream>
using namespace std;

int main()
{
	typedef int health;
	health healthValue = 13000;
	enum Weapons
	{
		SWORD = 1,
		DAGGER,
		MACE,
		TWIN_SWORDS,
		SAMURAI,
		WIZARD_STAFF,
		FIRE_POTION,
		ICE_BLADE,
		SMALL_KNIFE
	};

	cout << "My current health is: " << healthValue << endl;

	cout << "And the ID of my weapon of choice is: " << SAMURAI << endl;

};

