#include<iostream>
using namespace std;

constexpr int NumberOfMemver = 6;

void calculator(int[NumberOfMemver]);

int main() {
	int chessPieces[NumberOfMemver] = {};
	cout << "킹, 퀸, 룩, 비숍, 나이트, 폰의 개수를 입력하시오." << endl;
	for (int i = 0; i < NumberOfMemver; ++i)
		cin >> chessPieces[i];
	cout << "온전한 세트가 되기 위해 필요한 개수" << endl;
	calculator(chessPieces);


	return 0;
}
void calculator(int chessPieces[NumberOfMemver]) {
	int Piece[6] = { 1,1,2,2,2,8 };
	for (int i = 0; i < 6; i++)
		cout << Piece[i] - chessPieces[i] << " ";
}