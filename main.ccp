/*including basic functions*/
#include <iostream>
#include <string>
#include<cmath>
/*----*/
/*call our other header files here.*/
/*----*/
/*calling namespaces*/
using std::cout;
using std::cin;
using std::string;
/*Function Calls*/

/*part 4 functions*/
int fib(int r);
int pow(int p, int e);
int tri(int n);
void drawTri(int n);
int gcd(int a, int b);

/*part 5 functions*/
int fib_iter(int r);
int pow_iter(int p, int e);
int tri_iter(int n);
int gcd_iter(int a, int b);
/*----*/
int main() {


/* ----------------Part 4---------------------*/
//Fib Variables
	int response = 0;
	
	cout << "Which number of the Fibonnaci Sequence do you want? \n(For this program, we are NOT including 0 as a part of the sequence.)\n";
	cin >> response;
	cout << "That number is " << fib(response) << endl; //original call

	//Pow Variables
	int number = 0;
	int power = 0;

	cout << "Moving on to power. What number do you want raised to what power\n(use format [number space power])" << endl;
	cin >>  number >> power;
	cout << "That comes out to " << pow(number, power) << endl; //original call
	
	//Tri Variables
	int triNum = 0;
	
	cout << "Moving on to tri. Which triangular number do you want?\n";
	cin >> triNum;
	cout << "That comes out to " << tri(triNum) << endl << "Your triangle looks something like this:\n"; //original call
	drawTri(triNum);  // random function I wanted to do, because why not?
	
	//Gcd Variables
	int gcdNum1;
	int gcdNum2;

	cout << "Finally, moving on to gcd. Please enter the two numbers you want \n to find the greatest common denominator of. \n(Use formate [number1 space number2]) \n";
	cin >> gcdNum1 >> gcdNum2;
	if (gcdNum1 < 0 || gcdNum2 < 0){
		gcdNum1 = abs(gcdNum1);
		gcdNum2 = abs(gcdNum2);
	}
	cout << "The greatest common denominator between these two numbers is:\n" << gcd(gcdNum1, gcdNum2) << endl; // original call
	
	cout << "Now moving on to iterating." << endl;
	/* ----------------Part 5---------------------*/
	//Fib Variables
	int number;
	cout << "Which number of the Fibonnaci Sequence do you want? \n(For this program, we are NOT including 0 as a part of the sequence.)\n";
	cin >> number;
	cout << "That number is " << fib_iter(number) << endl;
	 
	//Pow Variables
	int base;
	int exp;
	cout << "Moving on to power. What number do you want raised to what power\n(use format [number space power])" << endl;
	cin >> base >> exp;
	cout << "That comes out to " << pow_iter(base, exp) << endl;

	//Tri Variables
	int number2;
	cout << "Moving on to tri. Which triangular number do you want?\n";
	cin >> number2;
	cout << "That comes out to " << tri_itter(number2) << endl;

	//GCD Variables

	int gcdNum1;
	int gcdNum2;

	cout << "Finally, moving on to gcd. Please enter the two numbers you want \n to find the greatest common denominator of. \n(Use formate [number1 space number2]) \n";
	cin >> gcdNum1 >> gcdNum2;
	cout << "The greatest common denominator between these two numbers is:\n" << gcd_itter(gcdNum1, gcdNum2) << endl;


}
