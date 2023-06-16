#include <iostream>

int main() {
    const int SIZE = 5;
    int numbers[SIZE];

    // Wprowadź wartości do tablicy
    for (int i = 0; i < SIZE; i++) {
        std::cout << "Wprowadź liczbę " << i+1 << ": ";
        std::cin >> numbers[i];
    }

    // Wyświetl zawartość tablicy
    std::cout << "Zawartość tablicy: ";
    for (int i = 0; i < SIZE; i++) {
        std::cout << numbers[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
