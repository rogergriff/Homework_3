// Assignment 03: Recursion and Practice with Exceptions, Templates, and STL Containers
// Programmers: John Connell, Brandon Hawkinson, Roger Griffin, and Joseph Jacob M. Dungca
// Instructor: Ben Blazak
// Class: Computer Science 121

#include "stlcontainers.h"

void inventory() {

	map<string, int> inventory = { { "sword", 25 }, { "bow", 15 }, { "shield", 25 }, { "arrows", 2 }, { "armor", 40 } };
			// m["phi"] = 1.61803;

			for (std::pair<string, int> e : inventory)
				cout << e.first << " equals " << e.second << "\n" << endl;

	system("pause");
}