// Assignment 03: Recursion and Practice with Exceptions, Templates, and STL Containers
// Programmers: John Connell, Brandon Hawkinson, Roger Griffin, and Joseph Jacob M. Dungca
// Instructor: Ben Blazak
// Class: Computer Science 121

#ifndef RECURSION_H
#define RECURSION_H

/*including basic functions*/
#include <iostream>
#include <string>
#include <cmath>
/*----*/

/*calling namespaces*/
using std::cout;
using std::cin;
using std::endl;
using std::string;
/*----*/

/*Function Calls*/
/*part 4 functions*/
int fib(int);
int pow(int, int);
int tri(int);
void drawTri(int);
int gcd(int, int);
void recursion();

/*part 5 functions*/
int fib_iter(int);
int pow_iter(int, int);
int tri_iter(int);
int gcd_iter(int, int);
void recursion_iter();
/*----*/
#endif