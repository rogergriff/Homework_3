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
