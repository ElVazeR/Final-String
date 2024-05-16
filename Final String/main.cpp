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
	// ����������� ��������������������� �������.
	for (int i = 0; i < str1.size(); i++) {
		str1[i] = std::tolower(str1[i]);
	}
	// ������ ��������������, ������������ ���� 
	const int spams_number = 4;
	static const std::string spams_messeges[spams_number]{ // ����� ������ �� ��������. ������� �� ��������� ���������.
		"100% free","sales increase", "only today", "black friday"
	};
	// ������� �������� ������������� � ����� ���������� �� � ������.
	for (int i = 0; i < spams_number; i++)
		if (str1.find(spams_messeges[i]) < str1.length()) // ���� ������� ��������� � ������ ������ ����� ����� ������, �� ������ ��� ����������� � ������, 
														  //�.�. ���� �������� ��� � ������, �� ������� find ������ ������������ �������� � ���� ������ Unsigned Long long
			return true;
	return false;
}

int main() {
	setlocale(LC_ALL, "Russian");
	int n;
	// ������ 1. ������� � ������.
	/*std::cout << "������ 1.\n ������� ������ -> ";
	std::string str1;
	std::getline(std::cin, str1);
	
	std::cout << spaces_str(str1);*/
	
	// ������ 2. �������� �����
	std::cout << "������ 2.\n ������� ������ -> ";
	std::string str2;
	std::getline(std::cin, str2);
	
	if (have_spam(str2)) // ��� bool if. �������� ���� ������� Bool (�������).
		std::cout << "��������� ����!\n\n";
	else
		std::cout << "����� �� ����������.\n\n";









	return 0;
}