#include<iostream>
using namespace std;

constexpr int NumberOfMemver = 6;

void calculator(int[NumberOfMemver]);

int main() {
	int chessPieces[NumberOfMemver] = {};
	cout << "ŷ, ��, ��, ���, ����Ʈ, ���� ������ �Է��Ͻÿ�." << endl;
	for (int i = 0; i < NumberOfMemver; ++i)
		cin >> chessPieces[i];
	cout << "������ ��Ʈ�� �Ǳ� ���� �ʿ��� ����" << endl;
	calculator(chessPieces);


	return 0;
}
void calculator(int chessPieces[NumberOfMemver]) {
	int Piece[6] = { 1,1,2,2,2,8 };
	for (int i = 0; i < 6; i++)
		cout << Piece[i] - chessPieces[i] << " ";
}