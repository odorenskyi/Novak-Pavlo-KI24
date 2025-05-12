#include <iostream>
#include <windows.h>
#include "ModulesNovak.h"

int main() {
   
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    
    std::locale::global(std::locale("uk_UA.UTF-8"));

    wchar_t choice;

    std::wcout << L"Програма задачі 9.4\n";

    do {
        std::wcout << L"\nМеню:\n";
        std::wcout << L"v – обчислення зарплати\n";
        std::wcout << L"m – конвертація розміру\n";
        std::wcout << L"q – підрахунок бітів\n";
        std::wcout << L"x – вихід\n";
        std::wcout << L"Ваш вибір: ";
        std::wcin >> choice;

        if (choice != L'x') {
            s_calculation(choice);
        }

    } while (choice != L'x');

    return 0;
}