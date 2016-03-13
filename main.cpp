// Assignment 03: Recursion and Practice with Exceptions, Templates, and STL Containers
// Programmers: John Connell, Brandon Hawkinson, Roger Griffin, and Joseph Jacob M. Dungca
// Instructor: Ben Blazak
// Class: Computer Science 121

#include "exceptions.h"
#include "recursion.h"
#include "stlcontainers.h"
#include "templates.h"


// Main function
int main(){
	// Variables
	string part;
	string menu = 
		"\nMain Menu:"
		"\nPart 1: Exceptions"
		"\nPart 2: Templates"
		"\nPart 3: STL Containers"
		"\nPart 4 and 5: Recursion"
		"\nChallange: 6"
		"\nExit Program: 0\n"
		"\nWhat part of assignement three would you like to see?: ";

	// Opening statement 
	cout << "Assignment 03: Recursion and Practice with Exceptions, Templates,\n\tand STL Containers\n" << endl;
	cout << "Programmers: John Connell, Brandon Hawkinson, Roger Griffin,\n\tand Joseph Jacob M. Dungca\n" << endl;
	cout << "Instructor: Ben Blazak" << endl;

	do{

		cout << menu;
		getline(cin, part);

		if (part == "1") // Part 1
			guessingGame();
		else if (part == "2") // Part 2
			myMonsters();
		else if (part == "3") // Part 3
			inventory();
		else if (part == "4" || part == "5") // Part 4 and Part 5
			recursion();
		else if (part == "6") // Challange
			;
		else if (part == "0") // Exit program
			continue;
		else
			cout << "\nInvalid selection.\nOnly use numbers any number between 0 and 5" << endl;
	} while (part != "0");
	
	//Closing program
	cout << "\nThank you for using this program.\nGood bye. " << char(2) << endl;

	// Sucessful run
	return 0;
}
