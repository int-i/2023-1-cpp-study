#include <iostream>
using namespace std;


class 초밥_장인 {
public:
	초밥_장인(int t, int d) {
		time = t;
		drink = d;
	}
	void 밥알갯수() {
		if (time >= 12 && time <= 16 && drink == 0) {
			cout << "320";
		}
		else {
				cout << "280";
		}
	}

private:
	int time;
	int drink;
};


int main() {
	int a, b;
	cin >> a >> b;

	초밥_장인 동우 { a, b };

	동우.밥알갯수();



	return 0;
}