#include <iostream>

using namespace std;
int sumInRange(int start, int end) {
    int sum = 0;
    for (int i = start; i <= end; ++i) {
        sum += i;
    }
    return sum;
}

int main() {
    setlocale(LC_ALL, "Rus");
    int start, end;
    std::cout << "������� ������ ���������: ";
    std::cin >> start;
    std::cout << "������� ����� ���������: ";
    std::cin >> end;
    int result = sumInRange(start, end);
    std::cout << "����� ����� � ���������: " << result << std::endl;
    return 0;
}
