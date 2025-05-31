#include <iostream>
#include <string>
#include "ModulesNovak.h"  
#include <locale>
using namespace std;

void runTask10_1() {
    string inputFile;
    cout << "\n[10.1] Введіть ім'я вхідного файлу (наприклад: input10_1.txt): ";
    cin >> inputFile;
    solve_10_1(inputFile.c_str());
    cout << "Задача 10.1 виконана. Перевірте файл: " << inputFile << endl;
}

void runTask10_2() {
    string inputFile;
    cout << "\n[10.2] Введіть ім'я вхідного файлу (той самий або новий): ";
    cin >> inputFile;
    solve_10_2(inputFile.c_str());
    cout << "Задача 10.2 виконана. Перевірте файл: " << inputFile << endl;
}

void runTask10_3() {
    string inputFile, outputFile;
    int x, y, z;
    cout << "\n[10.3] Введіть значення x, y, z (натуральні числа): ";
    cin >> x >> y >> z;
    cout << "Введіть ім'я вхідного файлу: ";
    cin >> inputFile;
    cout << "Введіть ім'я вихідного файлу: ";
    cin >> outputFile;

    solve_10_3(inputFile, outputFile, x, y, z);
    cout << "Задача 10.3 виконана. Результат у файлі: " << outputFile << endl;
}

int main() {
	setlocale(LC_ALL, "ukr"); 
    cout << "=== Демонстраційна програма (Lab10) ===" << endl;
    int choice;

    do {
        cout << "\nОберіть завдання для демонстрації:\n";
        cout << "1 - Завдання 10.1\n";
        cout << "2 - Завдання 10.2\n";
        cout << "3 - Завдання 10.3\n";
        cout << "0 - Вийти\n";
        cout << "Ваш вибір: ";
        cin >> choice;

        switch (choice) {
        case 1: runTask10_1(); break;
        case 2: runTask10_2(); break;
        case 3: runTask10_3(); break;
        case 0: cout << "Завершення програми.\n"; break;
        default: cout << "Невірний вибір. Спробуйте ще раз.\n";
        }
    } while (choice != 0);

    return 0;
}
