#include<iostream>
#include<cmath>
using std::cin;
using std::cout;
using std::endl;
int fib_iter(int n);
int pow_iter(int base, int exp);
int tri_itter(int n);
int gcd_itter(int num1, int num2);
int main() {
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


	return 0;
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

int tri_itter(int n) {
	int sum = 0;
	if (n == 0)
		return 0;
	for (int i = 1; i <= n; i++) 
		sum += i;
	return sum;
}

int gcd_itter(int num1, int num2) {
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
