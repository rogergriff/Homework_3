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
