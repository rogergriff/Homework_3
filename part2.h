
#ifndef MONSTER_H
#define MONSTER_H

template <typename T>
class  Monster {
private:
	int health, dex, str, intel, chr, con, wis;
	double baseSpeed, baseDam, baseMag, dexModify
		strModify, intelModify, chrModify, conModify,
		wisModify, SocialSkills;

	T data;

	static const bool isNpc = true;
	static const bool hasSocialSkills = false;
public:
	Monster(T data) {

		Monster::health = rand() % 100 + 1;
		Monster::dex = rand() % 10 + 1;
		Monster::str = rand() % 10 + 1;
		Monster::intel = rand() % 10 + 1;
		Monster::chr = rand() % 10 + 1;
		Monster::con = rand() % 10 + 1;
		Monster::wis = rand() % 10 + 1;

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

	~Monster() {
		cout << "health: " << health << " dex: " << dex << " str: " << str << " intel: " << intel << " chr: " << chr << " con: " << con << " wis: " << wis << endl;
		cout << "dexM: " << Monster::dexModify << " strM: " << Monster::strModify << " intelM: " << Monster::intelModify << " chrM: " << Monster::chrModify << " conM: " << Monster::conModify << " wisM: " << Monster::wisModify << endl;
	}

	T check() {
		if (sizeof(T) == sizeof(int)) 
			cout << "Cool, you put in some data: " << data; 
		if (sizeof(T) == sizeof(string))
			cout << "Cool! The monster's name is: " << data;
	}
};
#endif
