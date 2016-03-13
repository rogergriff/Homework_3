// Assignment 03: Recursion and Practice with Exceptions, Templates, and STL Containers
// Programmers: John Connell, Brandon Hawkinson, Roger Griffin, and Joseph Jacob M. Dungca
// Instructor: Ben Blazak
// Class: Computer Science 121

// Using Exceptions to implement a guessing game

#include "exceptions.h"

// Base function for a guessing a game
void guessingGame() {
	// Variables
	int turn = 0;
	bool guessedAnswer = false;
	const char theQuestion[] = "\n\tI am thinking of an array of characters,\n"
		"it starts with an a letter,\n"
		"has a whitespace at its center\n"
		"and the last printible character is a digit.\n\n"
		"Please input your your guess for the array: ";
	const char theAnswer[] = "D 4\0";
	string userAnswer;

	// Starting the guessing game
	cout << "\nThis is just a simple guessing game." << endl;
	do{
		// Getting the user's input
		cout << theQuestion;
		getline(cin, userAnswer);

		// Test the user's answer
		try {
			checkInput(userAnswer, theAnswer, turn);
		}
		catch (const char * message) {
			cout << "\nComputer Responce(" << ++turn << "): " << message << endl;
		}
		catch (bool rightAnswer) {
			guessedAnswer = rightAnswer;
		}
	} while (turn < 21 && guessedAnswer == false);

	// Closing the game
	if (turn >= 21 && guessedAnswer == false)
		cout << "\nComputer Responce(" << ++turn << "): You have failed to guess the array I am thinking of." << endl;
	else
		cout << "\nComputer Responce(" << ++turn << "): Congratulations you have correctley guessed the array\nI am thinking of. " << char(2) << endl;
}

// Function to check the user's input with the given conditions
void checkInput(string useranswer, const char * theanswer, int turn) {
	if (isalpha(useranswer[0]) && isspace(useranswer[1]) && isdigit(useranswer[2]) && useranswer.length() == 3)
		throw compareInput(useranswer, theanswer, turn);
	else if (turn >= 10 && turn < 15)
		throw "Second hint, the array only has 4 elements.";
	else if (turn >= 5 && turn < 10)
		throw "Your guess is still incorrect.\nFirst hint, the last element in the array is \'\\0\'";
	else
		throw "Your guess is incorrect.";
}

// Function to compare user's input with the answer
bool compareInput(string useranswer, const char * theanswer, int turn){
	for (int i = 0, j = 0; i < 4, j < 4; ++i, ++j){
		if (useranswer[i] != theanswer[j] && turn >= 20)
			throw "The digit is the magic number";
		else if (useranswer[i] != theanswer[j] && turn >= 15 && turn < 20)
			throw "Last hint, the first element in the array is \'D\'";
		else if (useranswer[i] != theanswer[j] && turn < 15)
			throw "Your guess dose not match the array I am thinking of";
		else
			return true;
	}
};