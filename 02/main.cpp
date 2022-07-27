#include <iostream>
#include <string>
#include "Counter.h"
#include "Options.h"

int main(int argc, char** argv) {

	system("chcp 1251");

	std::string answer;

	do {
		std::cout << "Вы хотите указать начальное значение счетчика? Введите да или нет: ";
		
		std::getline(std::cin, answer);

		if (answer != "да" && answer != "нет") {
			std::cout << "Некорректное сообщение!" << std::endl;
		}

	} while (answer != "да" && answer != "нет");


	if (answer == "да") {
		int i = 0;
		std::cout << "Введите начальное значение счетчика: ";
		std::cin >> i;
		while (std::cin.get() != '\n') continue;
		Counter count_with_initial_value(i);
		Options(count_with_initial_value, answer);
	}
	else {
		Counter count;
		Options(count, answer);
	}

	return 0;
}