#include <iostream>
using namespace std;


class �ʹ�_���� {
public:
	�ʹ�_����(int t, int d) {
		time = t;
		drink = d;
	}
	void ��˰���() {
		if (time >= 12 && time <= 16 && drink == 0) {
			cout << "320";
		}
		else {
				cout << "280";
		}
	}

private:
	int time;
	int drink;
};


int main() {
	int a, b;
	cin >> a >> b;

	�ʹ�_���� ���� { a, b };

	����.��˰���();



	return 0;
}