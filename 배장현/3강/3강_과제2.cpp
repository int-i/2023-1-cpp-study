#include <iostream>
using std::cin;
using std::cout;
constexpr auto endl{ '\n' };

class �Ʒõ�_�ʹ�_���� {
public: // ���� ����� ��� �Լ��� ���� �����ϴ� �κ�

	�Ʒõ�_�ʹ�_����(int �ð�, bool ��_����)
		: �ð�{ �ð� }, ��_����{ ��_���� } { }

	// ��� ������ ��ȯ�ϴ� �ʹ�_���� �޼���
	int �ʹ�_����() {
		if (��_���� or �ð� <= 11 or �ð� > 16)
			return 280;
		else
			return 320;
	}

private: // �������� �Ӽ����� ��� ������ ���� �����ϴ� �κ�

	int �ð�; 
	bool ��_����; 
};

auto main() -> int {
	// ���� ������� ���� ǥ�� ����� ����ȭ ���� �ڵ�
	cin.tie(nullptr)->sync_with_stdio(false);

	int T{ }; cin >> T;
	bool S{ }; cin >> S;

	�Ʒõ�_�ʹ�_���� ������{ T, S };
	cout << ������.�ʹ�_����() << endl;
}
