#include <iostream>

using namespace std;

bool isLuckyNumber(int number) {
    int sum = 0;
    while (number > 0) {
        sum += number % 10;
        number /= 10;
    }
    return sum == 7;
}

int main() {
    setlocale(LC_ALL, "Rus");
    int num;
    std::cout << "Введите шестизначное число: ";
    std::cin >> num;
    if (isLuckyNumber(num)) {
        std::cout << num << " - счастливое число!" << std::endl;
    }
    else {
        std::cout << num << " - не счастливое число." << std::endl;
    }
    return 0;
}
