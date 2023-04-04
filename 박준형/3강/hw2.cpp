//과제2 . 백준 27294

#include <iostream>
using namespace std;

class 훈련된_초밥_장인 {
public:
	훈련된_초밥_장인(int T, int S)
		: T{ T }, S{ S }{}
	int 초밥제작() {
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

	훈련된_초밥_장인 박준형{ T,S };
	cout << 박준형.초밥제작() << endl;

}