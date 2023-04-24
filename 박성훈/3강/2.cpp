#include <iostream>
using namespace std;

class 초밥_장인 {
public:
	초밥_장인(int 식사_시간, int 술) {
		this->식사_시간 = 식사_시간;
		this->술 = 술;
	}
	void 밥알_갯수() {
		if (식사_시간 >= 12 and 식사_시간 <= 16 and 술 == 0) {
			cout << 320;
		}
		else {
			cout << 280;
		}
	}
private:
	int 식사_시간;
	int 술;
};

int main() {
	int a = 0;
	int b = 0;
	cin >> a >> b;
	초밥_장인 밥알{ a, b };
	밥알.밥알_갯수();
	
	return 0;
}