//����2 . ���� 27294

#include <iostream>
using namespace std;

class �Ʒõ�_�ʹ�_���� {
public:
	�Ʒõ�_�ʹ�_����(int T, int S)
		: T{ T }, S{ S }{}
	int �ʹ�����() {
		if ((S == 1) || (T <= 11 || 16 < T)) {
			return 280;
		}
		else
			return 320;
	}
private:
	int T, S;
};

int main() {
	int T, S, r;
	cin >> T;
	cin >> S;

	�Ʒõ�_�ʹ�_���� ������{ T,S };
	cout << ������.�ʹ�����() << endl;

}