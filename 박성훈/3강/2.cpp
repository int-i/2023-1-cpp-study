#include <iostream>
using namespace std;

class �ʹ�_���� {
public:
	�ʹ�_����(int �Ļ�_�ð�, int ��) {
		this->�Ļ�_�ð� = �Ļ�_�ð�;
		this->�� = ��;
	}
	void ���_����() {
		if (�Ļ�_�ð� >= 12 and �Ļ�_�ð� <= 16 and �� == 0) {
			cout << 320;
		}
		else {
			cout << 280;
		}
	}
private:
	int �Ļ�_�ð�;
	int ��;
};

int main() {
	int a = 0;
	int b = 0;
	cin >> a >> b;
	�ʹ�_���� ���{ a, b };
	���.���_����();
	
	return 0;
}