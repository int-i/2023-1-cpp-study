#include <iostream>
using std::cin;
using std::cout;
constexpr auto endl{ '\n' };

auto main() -> int {
	// 빠른 입출력을 위한 표준 입출력 동기화 해제 코드
	cin.tie(nullptr)->sync_with_stdio(false);

	int N{ }; cin >> N; // 수열의 크기
	int X{ }; cin >> X; // 기준이 되는 수
	int inputValue{ }; // 순차적으로 입력받을 정수

	for (int i{ }; i < N; ++i) {
		cin >> inputValue;
		if (inputValue < X)
			cout << inputValue << ' ';
	}

	return 0;
}
