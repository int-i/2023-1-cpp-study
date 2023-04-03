#include <iostream> 
using namespace std;

constexpr int Number0fMember = 6;

void calculator(int[Number0fMember]);

int main() {
	int chessPieces[Number0fMember] = {};

	for (int i = 0; i < Number0fMember; ++i)
		cin >> chessPieces[i];

	calculator(chessPieces);

	return 0;
}
// 2<= i < 5는 안되네 -> 2<= i and i < 5 로 하면 됨
void calculator(int chessPieces[Number0fMember]) {
	for (int i = 0; i < Number0fMember; ++i)
		if (i < 2) {
			chessPieces[i] = 1 - chessPieces[i];
		}
		else if (i < 5) {
			chessPieces[i] = 2 - chessPieces[i];
		}
		else {
			chessPieces[i] = 8 - chessPieces[i];
		}
	for (int i = 0; i < Number0fMember; ++i) {
		cout << chessPieces[i] << " ";
	}
}