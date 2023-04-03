#include <iostream>
using std::cin;
using std::cout;
constexpr auto endl{ '\n' };

class 훈련된_초밥_장인 {
public: // 관련 기능을 멤버 함수를 통해 정의하는 부분

	훈련된_초밥_장인(int 시각, bool 술_유무)
		: 시각{ 시각 }, 술_유무{ 술_유무 } { }

	// 밥알 개수를 반환하는 초밥_제작 메서드
	int 초밥_제작() {
		if (술_유무 or 시각 <= 11 or 시각 > 16)
			return 280;
		else
			return 320;
	}

private: // 여러가지 속성들을 멤버 변수를 통해 정의하는 부분

	int 시각; 
	bool 술_유무; 
};

auto main() -> int {
	// 빠른 입출력을 위한 표준 입출력 동기화 해제 코드
	cin.tie(nullptr)->sync_with_stdio(false);

	int T{ }; cin >> T;
	bool S{ }; cin >> S;

	훈련된_초밥_장인 배장현{ T, S };
	cout << 배장현.초밥_제작() << endl;
}
