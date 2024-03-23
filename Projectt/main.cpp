#include <iostream>

using namespace std;
int power(int base, int exponent) {
    int result = 1;
    for (int i = 0; i < exponent; ++i) {
        result *= base;
    }
    return result;
}

int main() {
    setlocale(LC_ALL, "Rus");
    int base, exponent;
    std::cout << "Введите основание степени: ";
    std::cin >> base;
    std::cout << "Введите показатель степени: ";
    std::cin >> exponent;
    int result = power(base, exponent);
    std::cout << "Результат: " << result << std::endl;
    return 0;
}
