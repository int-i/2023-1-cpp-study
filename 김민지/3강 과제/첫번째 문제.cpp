#include <iostream>
#include <algorithm>
using namespace std;
constexpr int NumberOfMember = 6;
void calculator(int[NumberOfMember]);

int main1() {
	int chessPieces[NumberOfMember] = {};
	for (int i = 0; i < NumberOfMember;++i)
		cin >> chessPieces[i];

	calculator(chessPieces);

	return 0;
}
void calculator1(int chessPieces[NumberOfMember]) {
	int achessPieces[NumberOfMember] = { 1,1,2,2,2,8 };
	int plusminus[NumberOfMember] = {};

	transform(chessPieces, chessPieces + NumberOfMember, achessPieces, plusminus, [](const int& a, const int& b) {return b - a;});

	for (int i = 0;i < NumberOfMember;++i) {
		cout << plusminus[i];
		if (i < NumberOfMember - 1) {
			cout << ",";
		}
	}
	cout << endl;
}