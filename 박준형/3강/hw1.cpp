// ���� 1 ���� 3003��

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

constexpr int NumberOfMember = 6;

// ��ȯ���� ����, int �迭�� ���ڷ� �޴� �Լ�
// �迭�� ���� ������ ���� ����
// https://boycoding.tistory.com/193
void calculator(int[NumberOfMember]);

int main() {
	int chessPieces[NumberOfMember] = { }; // NumberOfMember ũ���� �迭�� 0���� �ʱ�ȭ
	for (int i = 0; i < NumberOfMember; ++i)
		cin >> chessPieces[i]; // �迭�� �� �ϳ��� ����ֱ�

	calculator(chessPieces);

	return 0;
}

void calculator(int chessPieces[NumberOfMember]) {
	// TODO: ���⿡ ���� Ǯ�� �ۼ�
	int a[6];
	a[0] = 1 - chessPieces[0];
	a[1] = 1 - chessPieces[1];
	a[2] = 2 - chessPieces[2];
	a[3] = 2 - chessPieces[3];
	a[4] = 2 - chessPieces[4];
	a[5] = 8 - chessPieces[5];
	for (int i = 0; i < NumberOfMember; i++) {
		cout << a[i] << " ";
	}
	// Hint: for��, if�� �� �ʿ� ���� ��¹��� ������ ��Ģ���� ��ȣ�����ε� ������ �ذ� �� �� �ִ�.
}