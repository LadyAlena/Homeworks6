#include <iostream>
#include "Calculator.h"

int main(int argc, char* argv) {

	setlocale(LC_ALL, "ru");

	double a = 0.0;
	double b = 0.0;
	int option = 0;

	std::cout << "Введите первое число: ";
	std::cin >> a;

	std::cout << "Введите второе число: ";
	std::cin >> b;

	std::cout << "Выберите операцию (1 - сложение, 2 - вычитание, 3 - умножение, 4 - деление, 5 - возведение в степень): ";
	std::cin >> option;

	switch (option) {
	case 1:
		std::cout << a << " + " << b << " = " << Sum(a, b) << std::endl;
		break;
	case 2:
		std::cout << a << " - " << b << " = " << Subtract(a, b) << std::endl;
		break;
	case 3:
		std::cout << a << " * " << b << " = " << Multiply(a, b) << std::endl;
		break;
	case 4:
		std::cout << a << " / " << b << " = " << Divide(a, b) << std::endl;
		break;
	case 5:
		std::cout << a << " в степени " << b << " = " << power_2(a, b) << std::endl;
		break;
	default:
		std::cout << "Такой опции не существует..." << std::endl;
		break;
	}

	return 0;
}