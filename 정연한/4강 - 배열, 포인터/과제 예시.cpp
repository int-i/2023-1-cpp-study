#include <iostream>
#include <vector>
using std::cin;
using std::cout;
constexpr auto endl{ '\n' };

using std::vector;


// 항상 강조하지만, 이런식으로 푸는 방법도 존재한다는 것만 봐야지
// 제대로 C++을 공부하지 않은 상황에서 아래 코드를 따라하는건 안된다!
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
