#include <iostream>
#include <vector>
using std::cin;
using std::cout;
constexpr auto endl{ '\n' };

using std::vector;


// �׻� ����������, �̷������� Ǫ�� ����� �����Ѵٴ� �͸� ������
// ����� C++�� �������� ���� ��Ȳ���� �Ʒ� �ڵ带 �����ϴ°� �ȵȴ�!
auto main() -> int {
	cin.tie(nullptr)->sync_with_stdio(false);

	int N{ }; cin >> N;

	double M{ };

	vector<double> list(N);
	for (auto& elem : list) {
		cin >> elem;
		if (M < elem)
			M = elem;
	}

	cout <<
		[=, temp{ 0.0 }]() mutable {
		for (int i{ }; i < N; ++i) {
			list[i] *= 100 / M;
			temp += list[i];
		}
		return temp / N;
	}()
		<< endl;

	return 0;
}
