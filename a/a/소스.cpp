#include <iostream>
using namespace std;

constexpr int  NumberOfMember = 6;

//��ȯ���� ����, int�迭�� ���ڷ� �޴� �Լ�

void calculator(int[NumberOfMember]);

int main() {
	int chessPieces[NumberOfMember] = {};
	for (int i = 0; i < NumberOfMember; ++i)
		cin >> chessPieces[i];
	calculator(chessPieces);
	return 0;

}

void calculator(int chessPieces[NumberOfMember]) {
	for (int i = 0; i < NumberOfMember; ++i) {
	
		if (i == 0) {
			chessPieces[0] = 1 - chessPieces[0];
		}
		if (i == 1) {
			chessPieces[i] = 1 - chessPieces[i];
		}
		if (i == 2) {
			chessPieces[i] = 2 - chessPieces[i];
		}
		if (i == 3) {
			chessPieces[i] = 2 - chessPieces[i];
		}
		if (i == 4) {
			chessPieces[i] = 2 - chessPieces[i];
		}
		if (i == 5) {
			chessPieces[i] = 8 - chessPieces[i];
		}
		
	cout << chessPieces[i] << endl;
	}
}