#include <iostream>
using std::cin;
using std::cout;
constexpr auto endl{ '\n' };

class �Ʒõ�_�ʹ�_���� {
public:
	�Ʒõ�_�ʹ�_����(int �ð�, bool ��_����)
		: �ð�{ �ð� }, ��_����{ ��_���� } { }

	// ��� ������ ��ȯ�ϴ� �ʹ�_���� �޼���
	int �ʹ�_����() {
		if (��_���� or �ð� <= 11 or �ð� > 16)
			return 280;
		else
			return 320;
	}

private:
	int �ð�; // �ʹ��� ����� �ð�
	bool ��_����; // ���� �Բ� ���ô����� ����
};

auto main() -> int {
	// ���� ������� ���� ǥ�� ����� ����ȭ ���� �ڵ�
	cin.tie(nullptr)->sync_with_stdio(false);

	// T�� 11 �����̸� ��ħ �ð�, 12 �̻� 16 �����̸� ���� �ð�, �׷��� ������ ���� �ð�
	int T{ }; cin >> T;
	bool S{ }; cin >> S;

	�Ʒõ�_�ʹ�_���� ������{ T, S };
	cout << ������.�ʹ�_����() << endl;
}
