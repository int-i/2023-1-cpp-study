#include <iostream>
using namespace std;


class �ʹ�_���� {
public:
	�ʹ�_����(int �ð�, int ����_����) {
		this->�ð� = �ð�;
		this->����_���� = ����_����;
	}
	void ������() {
		if (�ð� >= 12 && �ð� <= 16) {
			if (����_���� == 0)
				cout << "320";
			else
				cout << "280";
		}
		else
			cout << "280";
	}

private:
	int �ð�;
	int ����_����;
};


int main() {
	int a, b;
	cin >> a >> b;

	�ʹ�_���� ��˰���{ a, b };

	��˰���.������();



	return 0;
}
