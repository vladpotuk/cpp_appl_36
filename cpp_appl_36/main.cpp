#include <iostream>
#include<Windows.h>
//�������� �������, ��� ������� � ����� �� ��������� � ����� �������� �������.
void deleteAllOccurrences(char* str, char target) {
    int length = 0;
    while (str[length] != '\0') {
        if (str[length] == target) {
            
            for (int i = length; str[i] != '\0'; ++i) {
                str[i] = str[i + 1];
            }
            continue;  
        }
        ++length;
    }
}

int main() {
    system("chcp 1251");
    system("cls");
    const int MAX_LENGTH = 100;
    char inputString[MAX_LENGTH];

    std::cout << "������ �����: ";
    std::cin.getline(inputString, MAX_LENGTH);

    char target;
    std::cout << "������ ������ ��� ���������: ";
    std::cin >> target;

    deleteAllOccurrences(inputString, target);

    std::cout << "���������: " << inputString << std::endl;

    return 0;
}
