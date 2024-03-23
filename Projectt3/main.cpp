#include <iostream>
#include <string>

using namespace std;

void printCard(int cardNumber) {
    std::string suits[] = { "����", "�����", "�����", "�����" };
    std::string ranks[] = { "2", "3", "4", "5", "6", "7", "8", "9", "10", "�����", "����", "������", "���" };

    int suitIndex = (cardNumber - 1) / 13;
    int rankIndex = (cardNumber - 1) % 13;

    std::cout << "������ �����: " << ranks[rankIndex] << " " << suits[suitIndex] << std::endl;
}

int main() {
    setlocale(LC_ALL, "Rus");
    int cardNumber;
    std::cout << "������� ����� ����� (�� 1 �� 52): ";
    std::cin >> cardNumber;
    printCard(cardNumber);
    return 0;
}
