#include <iostream>
using std::cin;
using std::cout;
using std::endl;

// y = 2x + 1�� ���α׷��� �Լ��� ��ȯ�غ���
// 
// y = 2x + 1								<= y = f(x) ����
// 
// f(x) = 2x + 1							<= 2�� x ���̿� ���� �� * �߰�
// 
// f(x) = 2*x + 1							<= �Լ� �̸� f���� lineFunc�� ����
// 
// lineFunc(x) = 2*x + 1					<= �Ű������� �ڷ��� �߰�
//
// lineFunc(int x) = 2*x + 1				<= �Լ��� ��ȯ�� �߰�
// 
// int lineFunc(int x) = 2 * x + 1			<= �Լ� ���� = ���� �߰�ȣ�� ����
// 
// int lineFunc(int x) { return 2 * x + 1 }


int lineFunc(int); // �Լ� ����


int main() {
	int result = 0;
	// ������� ������ ���� ����
	result = lineFunc(10); // �Լ� ȣ��
	cout << result << endl; // ��� ���
	return 0;
}

int lineFunc(int x) { // �Լ� ����
	return 2 * x + 1;
}
