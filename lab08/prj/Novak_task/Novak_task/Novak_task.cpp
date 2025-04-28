
#include <iostream>
#include <sstream> 
#include <iomanip>
#include <bitset>
#include "ModulesNovak.h"    
#include <Windows.h>

std::string copyright() {
	return "";
}   
std::string logic_result(int a, int b) {
    return (a + 3 > b) ? "true" : "false";
}

std::string base_representation(int x) {
    std::ostringstream oss ;
    oss << "Десяткова: " << x << ", Шістнадцяткова : " << std::hex << x << ", Двійкова: " << std::bitset<8>(x);
    return oss.str(); 
}

int main() {
    SetConsoleOutputCP(1251); 
    SetConsoleCP(1251);
    int x, y, z, a, b;
    std::cout << "Введіть x, y, z, та a, b для перевірки логічного виразу: ";
    std::cin >> x >> y >> z >> a >> b;

    std:: cout << "\n ----------------------------------------\n"

        << "|   Novak Pavlo, CUNTU, Kropyvnickyi   |\n"

        << "|   Новак Павло, ЦНТУ, Кропивницький   |\n"

        << "\n -------- (c) All Rights Reserved --------\n\n";
    std::cout << copyright() << "\n";
    std::cout << "Логічний вираз a + 3 > b = " << logic_result(a, b) << "\n";
    std::cout << "x = " << base_representation(x) << "\n";
    std::cout << "y = " << base_representation(y) << "\n";
    std::cout << "z = " << base_representation(z) << "\n";

    std::cout << "S = " << s_calculation(x, y, z) << "\n";

    return 0;
}
