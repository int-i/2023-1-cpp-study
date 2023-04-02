
#include<iostream>

using namespace std;

class 밥알 {
public:
	int 갯수(int 식사시간, int 술의유무) {
		if (식사시간 >= 12 && 식사시간 <= 16) {
			if (술의유무 == 0) {
				return 320;
			}
			else
				return 280;
		}
		else
			return 280;
	}
private:
	int 식사시간;
	int 술의유무;
};

int main() {
	밥알 초밥장인{};
	int T;
	int S;
	int result;
	cout << "식사 시간을 입력하시오. ex) 16 " << endl;
	cin >> T;
	cout << "술의 유무를 입력하시오. (0 = 술 없이, 1 = 술과 함께)" << endl;
	cin >> S;
	result = 초밥장인.갯수(T, S);
	cout << result << endl;

	return 0;
}
