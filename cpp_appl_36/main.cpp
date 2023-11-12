#include <iostream>
#include<Windows.h>
//Написати функцію, яка видаляє з рядка всі входження в нього заданого символу.
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

    std::cout << "Введіть рядок: ";
    std::cin.getline(inputString, MAX_LENGTH);

    char target;
    std::cout << "Введіть символ для видалення: ";
    std::cin >> target;

    deleteAllOccurrences(inputString, target);

    std::cout << "Результат: " << inputString << std::endl;

    return 0;
}
