
#include<iostream>

using namespace std;

class ��� {
public:
	int ����(int �Ļ�ð�, int ��������) {
		if (�Ļ�ð� >= 12 && �Ļ�ð� <= 16) {
			if (�������� == 0) {
				return 320;
			}
			else
				return 280;
		}
		else
			return 280;
	}
private:
	int �Ļ�ð�;
	int ��������;
};

int main() {
	��� �ʹ�����{};
	int T;
	int S;
	int result;
	cout << "�Ļ� �ð��� �Է��Ͻÿ�. ex) 16 " << endl;
	cin >> T;
	cout << "���� ������ �Է��Ͻÿ�. (0 = �� ����, 1 = ���� �Բ�)" << endl;
	cin >> S;
	result = �ʹ�����.����(T, S);
	cout << result << endl;

	return 0;
}
