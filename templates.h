// Assignment 03: Recursion and Practice with Exceptions, Templates, and STL Containers
// Programmers: John Connell, Brandon Hawkinson, Roger Griffin, and Joseph Jacob M. Dungca
// Instructor: Ben Blazak
// Class: Computer Science 121

#ifndef MONSTER_H
#define MONSTER_H

#include <iostream>
#include <cmath>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

// Basic template of monster class
template <class T> 
class Monster{
private:
	T health, dex, str, intel, chr, con, wis,
		baseSpeed, baseDam, baseMag, dexModify,
		strModify, intelModify, chrModify, conModify,
		wisModify, SocialSkills;
	static const bool isNpc = true;
	static const bool hasSocialSkills = false;
public:
	Monster(T);
	~Monster();
	T checkTypeof_T();
};

// Function to create monsters
void myMonsters();
#endif
