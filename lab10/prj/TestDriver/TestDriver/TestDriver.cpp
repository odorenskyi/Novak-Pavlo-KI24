#include <iostream>
#include <fstream>
#include "ModulesNovak.h"

int main() {
    std::cout << "=== Тестування задач 10.1 - 10.3 ===\n";

    solve_10_1("output_10_1.txt");
    std::cout << "10.1 пройдена\n";

    solve_10_2("output_10_2.txt");
    std::cout << "10.2 пройдена\n";

    int x = 5, y = 10, z = 15, b = 25;
    solve_10_3("output_10_3.txt", x, y, z, b);
    std::cout << "10.3 пройдена\n";

    return 0;
}