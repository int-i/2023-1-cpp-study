#include <iostream>
using namespace std;


class 초밥_장인 {
public:
	초밥_장인(int 시간, int 술의_유무) {
		this->시간 = 시간;
		this->술의_유무 = 술의_유무;
	}
	void 조리법() {
		if (시간 >= 12 && 시간 <= 16) {
			if (술의_유무 == 0)
				cout << "320";
			else
				cout << "280";
		}
		else
			cout << "280";
	}

private:
	int 시간;
	int 술의_유무;
};


int main() {
	int a, b;
	cin >> a >> b;

	초밥_장인 밥알개수{ a, b };

	밥알개수.조리법();



	return 0;
}
