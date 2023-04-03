#include <iostream>
using namespace std;

constexpr int NumberOfMember = 6;

void calculator(int[NumberOfMember]);

int main() {
	int chessPieces[NumberOfMember] = { };
	for (int i = 0;i < NumberOfMember;++i)
		cin >> chessPieces[i];
	calculator(chessPieces);
	return 0;
}

void calculator(int chessPieces[NumberOfMember]) {
	int x[NumberOfMember] = { 1,1,2,2,2,8 };
	for (int i = 0;i < NumberOfMember;++i)
		cout << x[i] - chessPieces[i] << ' ';
}