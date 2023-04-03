#include <iostream>
using namespace std;
class 초밥_장인 {
public:
	초밥_장인(int T, bool S) {
		this->T = T;
		this->S = S;
	}
	
	int 밥알_개수() {
		if (T <= 11 or 16 < T or S)
			return 280;
		else
			return 320;
	}

private:
	int T;
	bool S;
};

int main() {
	int T{}; 
	cin >> T;
	bool S{};
	cin >> S;

	초밥_장인 강민서{ T, S };
	cout << 강민서.밥알_개수() << endl;
}