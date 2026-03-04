#include <iostream>
#include <utility> 
#include <map>
#include <vector>
#include <Windows.h>

std::pair<double, double> calculate_area_and_perimeter(double radius) 
{
    const double pi = 3.14159;
    return std::make_pair(pi * radius * radius, 2 * pi * radius); 
}

void swap_example(int& x, int& y) 
{
    std::cout << "До замены: x=" << x << ", y=" << y << '\n';
    std::swap(x, y); 
    std::cout << "После замены: x=" << x << ", y=" << y << '\n';
}

void move_example() 
{
    std::vector<int> v1 = { 1, 2, 3 };
    std::vector<int> v2 = std::move(v1); 
    std::cout << "Размер v1 после перемещения: " << v1.size() << '\n';
    std::cout << "Элементы v2: ";
    for (auto i : v2) std::cout << i << ' ';
    std::cout << '\n';
}

void map_with_pairs() 
{
    std::map<std::string, int> word_count = { {"apple", 1}, {"banana", 2} }; 
    for (const auto& item : word_count) {
        std::cout << "Слово '" << item.first << "' встречается " << item.second << " раз.\n";
    }
}

void exchange_example() 
{
    int value = 10;
    int old_val = std::exchange(value, 20);
    std::cout << "Старая величина: " << old_val << "; Новая величина: " << value << '\n';
}

int main() 
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    auto circle_result = calculate_area_and_perimeter(5);
    std::cout << "Площадь круга: " << circle_result.first << ", Периметр: " << circle_result.second << '\n';

    int a = 10, b = 20;
    swap_example(a, b);

    move_example();

    map_with_pairs();

    exchange_example();

    return 0;
}