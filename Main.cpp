#include <iostream>
#include <utility>   
#include <vector> 
#include <Windows.h>

// Демонстрационная функция
std::pair<int, int> sum_and_product(int first_num, int second_num) 
{
    return std::make_pair(first_num + second_num, first_num * second_num);
}

int main() 
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    // Без функции
    std::pair<int, double> manual_pair = { 10, 3.14 };

    std::pair<char, char> char_pair = std::make_pair('A', 'B');

    std::cout << "Ручная пара: Первый элемент = " << manual_pair.first << ", Второй элемент = " << manual_pair.second << '\n';
    std::cout << "Пара с make_pair: Первый элемент = " << char_pair.first << ", Второй элемент = " << char_pair.second << '\n';


    // С функцией
    auto result_pair = sum_and_product(5, 8);
    std::cout << "Результат функции: Сумма = " << result_pair.first << ", Произведение = " << result_pair.second << '\n';


    //С контейнером
    std::vector<std::pair<int, std::string>> student_scores = 
    {
        {1, "Игорь"},
        {2, "Олег"}
    };

    for (const auto& student : student_scores) 
    {
        std::cout << "ID ученика: " << student.first << ", Имя: " << student.second << '\n';
    }

    return 0;
}