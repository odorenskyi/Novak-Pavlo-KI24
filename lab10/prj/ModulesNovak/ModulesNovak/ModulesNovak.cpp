#define _CRT_SECURE_NO_WARNINGS
#include <ctime>
#include "ModulesNovak.h"
#include <fstream>
#include <string>
#include <bitset>

std::string s_calculation(int x, int y, int z) {
    return std::to_string(x + y + z);
}

void solve_10_1(const std::string& filename) {
    std::ofstream out(filename);

    std::string author = "Ім'я Прізвище, ХНУРЕ, Україна, 2025";
    std::string input = "Хай щастить";
    int letter_count = 0;
    bool is_word = true;

    for (char ch : input) {
        if (isalpha((unsigned char)ch)) ++letter_count;
        else {
            is_word = false;
            break;
        }
    }

    out << author << "\n";
    out << "Кількість літер: " << (is_word ? letter_count : 0) << "\n";
    out << (is_word ? "Хай щастить" : "Анатолій Таран") << "\n";

    out << "Хай щастить у Вашій хаті, мамо:\n"
        "Всім, хто пересунеться Ваш поріг:\n"
        "Добрим людям, і птахам так само,\n"
        "І котові, що в теплі принишк;\n"
        "Хай щастить кожненькій деревині,\n"
        "Що до хати віття притулив,\n"
        "Хай щастить малесенькій травині\n"
        "Й вітрові, що прилітав здаля.\n";

    out.close();
}

void solve_10_2(const std::string& filename) {
    std::ofstream out(filename, std::ios::app);

    out << "\nХай щастить у Вашій хаті, мамо:\n"
        "Всім, хто пересунеться Ваш поріг:\n"
        "Добрим людям, і птахам так само,\n"
        "І котові, що в теплі принишк;\n"
        "Хай щастить кожненькій деревині,\n"
        "Що до хати віття притулив,\n"
        "Хай щастить малесенькій травині\n"
        "Й вітрові, що прилітав здаля.\n";

    time_t now = time(0);
    out << "Дата та час: " << ctime(&now);

    out.close();
}

void solve_10_3(const std::string& inputFile, const std::string& outputFile, int x, int y, int z)
{
	std::ifstream in(inputFile);
	if (!in.is_open()) {
		throw std::runtime_error("Не вдалося відкрити вхідний файл");
	}
	std::ofstream out(outputFile, std::ios::app);
	if (!out.is_open()) {
		throw std::runtime_error("Не вдалося відкрити вихідний файл");
	}
	std::string result = s_calculation(x, y, z);
	out << "Результат s_calculation: " << result << "\n";
	int b;
	in >> b;
	if (in.fail()) {
		throw std::runtime_error("Помилка читання числа з файлу");
	}
	std::string binary = std::bitset<32>(b).to_string();
	out << "Число " << b << " у двійковому коді: " << binary << "\n";
	in.close();
	out.close();
}
