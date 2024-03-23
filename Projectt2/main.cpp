#include <iostream>

using namespace std;

bool isPerfect(int number) {
    int sum = 0;
    for (int i = 1; i < number; ++i) {
        if (number % i == 0) {
            sum += i;
        }
    }
    return sum == number;
}

void findPerfectNumbers(int start, int end) {
    std::cout << "����������� ����� � ��������� [" << start << ", " << end << "]:" << std::endl;
    for (int i = start; i <= end; ++i) {
        if (isPerfect(i)) {
            std::cout << i << " ";
        }
    }
    std::cout << std::endl;
}

int main() {
    setlocale(LC_ALL, "Rus");
    int start, end;
    std::cout << "������� ������ ���������: ";
    std::cin >> start;
    std::cout << "������� ����� ���������: ";
    std::cin >> end;
    findPerfectNumbers(start, end);
    return 0;
}
