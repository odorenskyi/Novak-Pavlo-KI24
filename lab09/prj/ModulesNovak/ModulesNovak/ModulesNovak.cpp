#include "ModulesNovak.h"
#include <cmath>
#include <bitset>
#include <map>
#include <iostream>
#include "Windows.h"

double calculate_salary(int days) {
    double gross = days * 8 * 450;
    double tax = gross * 0.15;
    double pension = gross * 0.02;
    double unemployment = gross * 0.006;
    double insurance = gross * 0.01;
    double net = gross - (tax + pension + unemployment + insurance);
    return net;
}

std::string convert_size(int ua_size) {
    std::map<int, std::string> size_map = {
        {23, "37/38"}, {25, "39/40"}, {27, "41/42"}, {29, "43/44"},
        {31, "45/46"}
    };
    return size_map.count(ua_size) ? size_map[ua_size] : "Unknown";
}

std::pair<int, int> count_binary_digits(int N) {
    std::bitset<32> b(N);
    int zeros = 0, ones = 0;
    for (int i = 0; i < 32; ++i)
        (b[i] ? ones : zeros)++;
    return { zeros, ones };
}

void s_calculation(char option) {
    if (option == 'v') {
        int days;
        std::cout << "Введіть кількість відпрацьованих днів: ";
        std::cin >> days;
        std::cout << "Зароблені гроші: " << calculate_salary(days) << " UAH\n";
    }
    else if (option == 'm') {
        int size;
        std::cout << "Введіть UA розмір ноги: ";
        std::cin >> size;
        std::cout << "Розмір в US/UK/EU: " << convert_size(size) << "\n";
    }
    else if (option == 'q') {
        int N;
        std::cout << "Введіть число: ";
        std::cin >> N;
        std::pair<int, int> result = count_binary_digits(N);
        std::cout << "Двійкові нулі: " << result.first << ", ones: " << result.second << "\n";
    }
    else {
        std::cerr << "Unknown command.\n";
    }
} 
