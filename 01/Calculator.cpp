#include "Calculator.h"

double Sum(double a, double b) {
	return a + b;
}

double Subtract(double a, double b) {
	return a - b;
};

double Multiply(double a, double b) {
	return a * b;
};

double Divide(double a, double b) {
	return a / b; 
};

double power_2(double a, double b) {
	int result = 1;

	for (int i = 0; i < b; ++i) {
		result *= a;
	}

	return result;
};