﻿#include <iostream>
using namespace std;

double power(double base, int exponent) {

	double result = 1;

	for (int i = 0; i < exponent; i++) {

		result *= base;

	}

	return result;

}

int main() {

	double base;

	int exponent;

	cout << "Enter the base: ";

	cin >> base;

	cout << "Enter the exponent: ";

	cin >> exponent;

	double result = power(base, exponent);

	cout << base << " raised to the power of " << exponent << " is " << result << endl;

	return 0;

}