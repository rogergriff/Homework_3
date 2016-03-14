// Assignment 03: Recursion and Practice with Exceptions, Templates, and STL Containers
// Programmers: John Connell, Brandon Hawkinson, Roger Griffin, and Joseph Jacob M. Dungca
// Instructor: Ben Blazak
// Class: Computer Science 121

// Using Exceptions to implement a guessing game
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
void guessingGame();

// Function to check the user's input
void checkInput(string, const char *, int);

// Function to compare user's input with the answer
bool compareInput(string, const char *, int);

#endif
