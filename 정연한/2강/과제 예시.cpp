#include <iostream>
using std::cin;
using std::cout;
constexpr auto endl{ '\n' };

auto main() -> int {
	// ���� ������� ���� ǥ�� ����� ����ȭ ���� �ڵ�
	cin.tie(nullptr)->sync_with_stdio(false);

	int N{ }; cin >> N; // ������ ũ��
	int X{ }; cin >> X; // ������ �Ǵ� ��
	int inputValue{ }; // ���������� �Է¹��� ����

	for (int i{ }; i < N; ++i) {
		cin >> inputValue;
		if (inputValue < X)
			cout << inputValue << ' ';
	}

	return 0;
}
