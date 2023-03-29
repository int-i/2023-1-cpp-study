#include <iostream>
using std::cin;
using std::cout;
constexpr auto endl{ '\n' };

class 훈련된_초밥_장인 {
public:
	훈련된_초밥_장인(int 시각, bool 술_유무)
		: 시각{ 시각 }, 술_유무{ 술_유무 } { }

	// 밥알 개수를 반환하는 초밥_제작 메서드
	int 초밥_제작() {
		if (술_유무 or 시각 <= 11 or 시각 > 16)
			return 280;
		else
			return 320;
	}

private:
	int 시각; // 초밥을 만드는 시각
	bool 술_유무; // 술과 함께 마시는지의 유무
};

auto main() -> int {
	// 빠른 입출력을 위한 표준 입출력 동기화 해제 코드
	cin.tie(nullptr)->sync_with_stdio(false);

	// T가 11 이하이면 아침 시간, 12 이상 16 이하이면 점심 시간, 그렇지 않으면 저녁 시간
	int T{ }; cin >> T;
	bool S{ }; cin >> S;

	훈련된_초밥_장인 정연한{ T, S };
	cout << 정연한.초밥_제작() << endl;
}
