#include <iostream>
using std::cin;
using std::cout;
using std::endl;

// �� ���ô� �ϱ��� ����� �� �� �� ������� �����ϰ� �ֽ��ϴ�.
// �������� �ȵǴ°��� �����̿���.

void func() {
	return 0; // �Ұ���
	return; // �Լ��� ������ �뵵�θ� ���
}

int main() {
	int i = func(); // ��ȯ���� ������ �Ұ���
	return 0;
}

