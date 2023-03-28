#include <iostream>

constexpr int NumberOfMember = 6;

void calculator(int[NumberOfMember]);

int main() {
    int chessPieces[NumberOfMember] = {};
    for (int i = 0; i < NumberOfMember; ++i)
        std::cin >> chessPieces[i];

    calculator(chessPieces);

    return 0;
}

void calculator(int chessPieces[NumberOfMember]) {
    int Pieces[NumberOfMember] = { 1, 1, 2, 2, 2, 8 };
    for (int i = 0; i < NumberOfMember; ++i) {
        std::cout << Pieces[i] - chessPieces[i] << ' ';
    }
}