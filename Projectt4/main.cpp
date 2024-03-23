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
    std::cout << "������� ������������ �����: ";
    std::cin >> num;
    if (isLuckyNumber(num)) {
        std::cout << num << " - ���������� �����!" << std::endl;
    }
    else {
        std::cout << num << " - �� ���������� �����." << std::endl;
    }
    return 0;
}
