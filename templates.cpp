// Assignment 03: Recursion and Practice with Exceptions, Templates, and STL Containers
// Programmers: John Connell, Brandon Hawkinson, Roger Griffin, and Joseph Jacob M. Dungca
// Instructor: Ben Blazak
// Class: Computer Science 121

#include "templates.h"

// Basic template of monster class: Constructor
template <class T>
Monster::Monster(T data) : data(data) {
		Monster::health = data % 100 + 1;
		Monster::dex = data % 10 + 1;
		Monster::str = data % 10 + 1;
		Monster::intel = data % 10 + 1;
		Monster::chr = data % 10 + 1;
		Monster::con = data % 10 + 1;
		Monster::wis = data % 10 + 1;

		Monster::dexModify = (Monster::dex / 100) * 10;
		Monster::strModify = (Monster::str / 70) * 10;
		Monster::intelModify = (Monster::intel / 100) * 5;
		Monster::chrModify = (Monster::chr / 100) * 7.5;
		Monster::conModify = (Monster::con / 85) * 10;
		Monster::wisModify = (Monster::wis / 100) * 9;

		Monster::baseSpeed = 300 * Monster::dexModify;
		Monster::baseDam = 5 * Monster::strModify * Monster::conModify;
		Monster::baseMag = 3 * Monster::intelModify * Monster::wisModify;
		if (!Monster::hasSocialSkills)
			Monster::socialSkills = .1 * Monster::chrModify;
}

// Basic template of monster class: Destructor
template <class T>
Monster::~Monster() {
	cout << "health: " << health << " dex: " << dex << " str: " << str << " intel: " << intel << " chr: " << chr << " con: " << con << " wis: " << wis << endl;
	cout << "dexM: " << Monster::dexModify << " strM: " << Monster::strModify << " intelM: " << Monster::intelModify << " chrM: " << Monster::chrModify << " conM: " << Monster::conModify << " wisM: " << Monster::wisModify << endl;
}

// Basic template of monster class: Constructor
template <class T>
T Monster::checkTypeof_T(T data) : data(data) {
	if (sizeof(data) == sizeof(int))
		cout << "Cool, you put in some data of type: " << data;
	if (sizeof(data) == sizeof(float))
		cout << "Cool! The monster's name is: " << data;
}

// Function to create monsters
void myMonsters(){
	Monster <int> water(3);
	Monster <float> fire(2);
}
