



/*  3강 함수
int lineFunc(int);

int main() {
	int result = 0;
	// 결과값을 저장할 변수 선언
	result = lineFunc(10); //함수 호출
	cout << result << endl;  // result 출력
	return 0;
}

int lineFunc(int x) {
	return 2 * x + 1;
}

*/



/*  3강 람다식
int main() {

	auto y1 = [](int x) -> int { return x * 2 + 1; };

	auto y2 = [](int x) {return x * 2 + 1; };

	int result1 = y1(10);
	int result2 = y2(10);

	cout << result1 << endl;
	cout << result2 << endl;

	return 0;

}
*/


/*  3강 CLASS
class 밀키트 {
public: //밀키트와 관련된 기능(function)을 멤버 함수=method로 정의한다.
	밀키트(string 이름, string 종류, int 조리_시간, double 조리_온도) {
		this->이름 = 이름;
		this->종류 = 종류;
		this->조리_시간 = 조리_시간;
		this->조리_온도 = 조리_온도;
	}

	void 조리법() {
		cout << 이름 << "을(를) 조리하는 방법:" << endl;

		// 입력받은 멤버 변수 {종류}값에 따라 조리법이 달라진다.
		if (종류 == "볶음") {
			cout << "밀키트 내에 있는 재료를 다 꺼내서 메인 재료와 채소를 다듬어주고," << endl
				<< "궁중 팬이나 웍을 " << 조리_온도 << "도로 가열하여 메인 재료와 채소들을 넣고, " << endl
				<< 조리_시간 << "분 만큼 볶다가 향신료를 뿌려준다." << endl;
		}
		else if (종류 == "구이") {
			cout << "밀키트 내에 있는 재료를 꺼내 대충 하고" << endl
				<< "팬에 기름 두르고" << 조리_온도 << "도로 달궈준 후" << endl
				<< 조리_시간 << "분간 튀기듯이 굽는다." << endl;
		}
		else if (종류 == "탕") {
			cout << "물 붓고 재료 넣고" << endl
				<< 조리_온도 << "도로 가열시켜 다 넣고" << endl
				<< 조리_시간 << "분간 익힌다." << endl;
		}
	}



private: // 밀키트라는 개념을 이루는 여러 속성을 멤버 변수 =field 로 정의한다.
	string 이름; // 해당 밀키트의 이름
	string 종류; // 해당 밀키트의 종류
	int 조리_시간;  // 해당 밀키트를 조리하는데 걸리는 시간
	double 조리_온도;  //해당 밀키트를 조리하는 온도



};


int main() {
	//위에서 만든 클래스를 통해 객체를 선언할 수 있다.
	밀키트 감자탕{ "감자탕", "탕", 10, 100 };

	감자탕.조리법();

	밀키트 스테이크{ "스테이크","구이",12,170 };
	스테이크.조리법();

	밀키트 제육볶음{ "제육볶움", "볶음", 12, 160 };
	제육볶음.조리법();

	return 0;
}
*/