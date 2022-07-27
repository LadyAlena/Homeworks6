#include <iostream>
#include <string>
#include "Options.h"
#include "Counter.h"


void Options(Counter counter_example, std::string answer) {
	do {
		std::cout << "Введите команду ('+', '-', '=' или 'x'): ";

		std::getline(std::cin, answer);

		if (answer == "+") {
			counter_example.increase();
		}
		else if (answer == "-") {
			counter_example.reduce();
		}
		else if (answer == "=") {
			counter_example.show_counter();
		}
		else if (answer == "x") {
			std::cout << "До свидания!" << std::endl;
		}
		else {
			std::cout << "Некорректный ввод операции!" << std::endl;
			if (answer == "х") { std::cout << "Вводите операцию 'x' в ENG раскладке" << std::endl; }
		}

	} while (!(answer == "x"));
}