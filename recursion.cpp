// Assignment 03: Recursion and Practice with Exceptions, Templates, and STL Containers
// Programmers: John Connell, Brandon Hawkinson, Roger Griffin, and Joseph Jacob M. Dungca
// Instructor: Ben Blazak
// Class: Computer Science 121

#include "recursion.h"

int fib(int n){
	if (n == 1)
		return 1;
	if (n == 2)
		return 1;
	return fib(n - 1) + fib(n - 2); // recursive call
}


int pow(int base, int exp){
	--exp;
	if (exp == 0)
		return base;
	return base * pow(base, exp);  //recursive call
}

int tri(int n){
	if (n == 0)
		return 0;
	return n + tri(n - 1); // recursive call
}

void drawTri(int n){
	for (int i = 1; i <= n; i++){
		for (int j = 0; j < i; j++)
			cout << "* ";
		cout << endl;
	}
}

int gcd(int a, int b){
	if (a < 0 || b < 0){
		a = abs(a);
		b = abs(b);
	}
	if (a == 0)
		return b;
	if (b == 0)
		return a;
	if (b > a)
		return gcd(a, b - a);
	if (a > b)
		return gcd(a - b, b);
}

int fib_iter(int n) {
	int a = 0;
	int b = 1;
	int sum;
	if (n == 1 || n == 2) {
		return 1;
	}
	for (int i = 1; i < n; i++) {
		sum = a + b;
		a = b;
		b = sum;
	}
	return sum;
}

int pow_iter(int base, int exp) {
	int sum = 1;
	for (int i = 0; i < exp; i++)
		sum *= base;
	return sum;
}

int tri_iter(int n) {
	int sum = 0;
	if (n == 0)
		return 0;
	for (int i = 1; i <= n; i++)
		sum += i;
	return sum;
}

int gcd_iter(int num1, int num2) {
	if (num1 < 0 || num2 < 0) {
		num1 = abs(num1);
		num2 = abs(num2);
	}
	while (num1 != 0 && num2 != 0) {
		if (num1 > num2)
			num1 -= num2;
		else if (num2 > num1)
			num2 -= num1;
		else if (num2 == num1)
			return num1;
	}
	if (num1 == 0)
		return num2;
	return num1;
}

void recursion(){
	/* ----------------Part 4---------------------*/
	//Fib Variables
	int fibNum = 0;
	cout << "Which number of the Fibonnaci Sequence do you want? \n(For this program, we are NOT including 0 as a part of the sequence.)\n";
	cin >> fibNum;
	cout << "That number is " << fib(fibNum) << endl; //original call

	//Pow Variables
	int base = 0,  power = 0;
	cout << "Moving on to power. What number do you want raised to what power\n(use format [number space power])" << endl;
	cin >> base >> power;
	cout << "That comes out to " << pow(base, power) << endl; //original call

	//Tri Variables
	int triNum = 0;
	cout << "Moving on to tri. Which triangular number do you want?\n";
	cin >> triNum;
	cout << "That comes out to " << tri(triNum) << endl << "Your triangle looks something like this:\n"; //original call
	drawTri(triNum);  // random function I wanted to do, because why not?

	//Gcd Variables
	int gcdNum1, gcdNum2;
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
	int fibNum_iter;
	cout << "Which number of the Fibonnaci Sequence do you want? \n(For this program, we are NOT including 0 as a part of the sequence.)\n";
	cin >> fibNum_iter;
	cout << "That number is " << fib_iter(fibNum_iter) << endl;

	//Pow Variables
	int base_iter, power_iter;
	cout << "Moving on to power. What number do you want raised to what power\n(use format [number space power])" << endl;
	cin >> base_iter >> power_iter;
	cout << "That comes out to " << pow_iter(base_iter, power_iter) << endl;

	//Tri Variables
	int triNum_iter;
	cout << "Moving on to tri. Which triangular number do you want?\n";
	cin >> triNum_iter;
	cout << "That comes out to " << tri_iter(triNum_iter) << endl;

	//GCD Variables
	int gcdNum1_iter, gcdNum2_iter;
	cout << "Finally, moving on to gcd. Please enter the two numbers you want \n to find the greatest common denominator of. \n(Use formate [number1 space number2]) \n";
	cin >> gcdNum1_iter >> gcdNum2_iter;
	cout << "The greatest common denominator between these two numbers is:\n" << gcd_iter(gcdNum1_iter, gcdNum2_iter) << endl;
}

