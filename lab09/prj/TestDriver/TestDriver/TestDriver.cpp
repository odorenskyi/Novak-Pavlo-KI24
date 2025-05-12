#include <iostream>
#include <locale>
#include <windows.h>
#include "ModulesNovak.h"

void run_test(wchar_t option, const std::wstring& description) {
    std::wcout << L"\n[Тест] " << description << L" (опція '" << option << L"')\n";
    s_calculation(static_cast<char>(option));
}

int main() {
   
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    
    std::locale::global(std::locale("uk_UA.UTF-8"));

    std::wcout << L"=== Тест-драйвер ===\n";

    run_test(L'v', L"Розрахунок зарплати");
    run_test(L'm', L"Конвертація розміру");
    run_test(L'q', L"Підрахунок бітів");

    run_test(L'x', L"Невідома команда");

    return 0;
}