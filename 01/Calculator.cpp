#include "Calculator.h"
#include <iostream>

void Sum(double a, double b) {
	std::cout << a << " + " << b << " = " << a + b << std::endl;
}

void Subtract(double a, double b) {
	std::cout << a << " - " << b << " = " << a - b << std::endl;
};

void Multiply(double a, double b) {
	std::cout << a << " * " << b << " = " << a*b << std::endl;
};

void Divide(double a, double b) {

	if (!b) {
		std::cout << "Ошибка деления на ноль" << std::endl;
	}
	else {
		std::cout << a << " / " << b << " = " << a/b << std::endl;;
	}
};

void power_2(double a, double b) {
	int result = 1;

	for (int i = 0; i < b; ++i) {
		result *= a;
	}

	std::cout << a << " в степени " << b << " = " << result << std::endl;
};
