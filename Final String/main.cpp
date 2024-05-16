#include <iostream>
#include <cstring>
#include <string>

std::string spaces_str(std::string str) {
	for (int i = str.size() - 1; i > 0; i--) {
		str.insert(i, " ");
	}
	return str;
}


bool have_spam(std::string str1) {
	// обеспечение нерегистрозависимости функции.
	for (int i = 0; i < str1.size(); i++) {
		str1[i] = std::tolower(str1[i]);
	}
	// Массив словосочетаний, обозначиющих спам 
	const int spams_number = 4;
	static const std::string spams_messeges[spams_number]{ // Чтобы массив не удалялся. Удаляет по окончанию программы.
		"100% free","sales increase", "only today", "black friday"
	};
	// Перебор спамовых слвосочетаний с целью выявляения их в строке.
	for (int i = 0; i < spams_number; i++)
		if (str1.find(spams_messeges[i]) < str1.length()) // Если позиция подстроки в строке меньше длины самой строки, то значит она присуствует в строке, 
														  //т.к. если элемента нет в строке, то функция find вернет максимальное значение в типе данных Unsigned Long long
			return true;
	return false;
}

int main() {
	setlocale(LC_ALL, "Russian");
	int n;
	// Задача 1. Пробелы в строку.
	/*std::cout << "Задача 1.\n Введите строку -> ";
	std::string str1;
	std::getline(std::cin, str1);
	
	std::cout << spaces_str(str1);*/
	
	// Задача 2. Проверка спама
	std::cout << "Задача 2.\n Введите строку -> ";
	std::string str2;
	std::getline(std::cin, str2);
	
	if (have_spam(str2)) // Это bool if. работает если функция Bool (буловая).
		std::cout << "Обнаружен спам!\n\n";
	else
		std::cout << "Спама не обнаружено.\n\n";









	return 0;
}