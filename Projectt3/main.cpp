#include <iostream>
#include <string>

using namespace std;

void printCard(int cardNumber) {
    std::string suits[] = { "Пики", "Трефы", "Червы", "Бубны" };
    std::string ranks[] = { "2", "3", "4", "5", "6", "7", "8", "9", "10", "Валет", "Дама", "Король", "Туз" };

    int suitIndex = (cardNumber - 1) / 13;
    int rankIndex = (cardNumber - 1) % 13;

    std::cout << "Выпала карта: " << ranks[rankIndex] << " " << suits[suitIndex] << std::endl;
}

int main() {
    setlocale(LC_ALL, "Rus");
    int cardNumber;
    std::cout << "Введите номер карты (от 1 до 52): ";
    std::cin >> cardNumber;
    printCard(cardNumber);
    return 0;
}
