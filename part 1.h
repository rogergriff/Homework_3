// Using Exceptions to implement a guessing game
// Name: Joseph Jacob M. Dungca
// Class: Computer Science 121

#ifndef EXCEPTIONS_h
#define EXCEPTIONS_h

#include <iostream>
#include <string>
#include <ctype.h>

using std::cout;
using std::cin;
using std::endl;

using std::string;

// Base function for a guessing a game
void startGame();

// Function to check the users input
void checkInput(string, const char *, int);

#endif
