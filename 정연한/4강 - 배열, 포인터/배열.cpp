#include <iostream>
#include <algorithm>
using std::cin;
using std::cout;
using std::endl;

using std::sort;


int main() {
	// �й��� ���� �迭
	int SN[3] = { };

	// �й� ���������� �Է�
	for (int i = 0; i < sizeof(SN) / sizeof(int); ++i)
		cin >> SN[i];

	// �迭�� �̸��� �迭�� ù��° ����� �ּҰ��� ����.
	// ��, SN == &SN[0]
	// ���� �Ʒ��� &SN[0], &SN[3]�� ����.
	sort(SN, SN + 3);

	cout << endl << "���� ���: ";
	for (int i = 0; i < sizeof(SN) / sizeof(int); ++i)
		cout << SN[i] << ' ';

	return 0;
}
