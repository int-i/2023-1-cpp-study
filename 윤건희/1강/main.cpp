// input, output stream의 약자
// 말 그대로 입출력 스트림과 관련된 헤더파일이다.
// 스트림이란 운영체제에 의해 생성되는 가상의 연결 고리를 의미하며, 중간 매개자 역할을 한다.
#include <iostream>

// std라는 네임스페이스를 써라 하고 컴파일러에게 지시하는 것
// 그래서 이름도 using 지시문
using namespace std;

// C++ 프로그램의 시작이자 끝을 담당하는 main 함수
// C++ 프로그램이 시작되면 main 함수가 시작되고,
// main 함수가 종료되면 C++ 프로그램이 종료된다.
int main() {
	// 출력은 cout을 통해 할 수 있다.
	// cout 뒤에 <<(출력 스트림 연산자)를 통해 출력하고자 하는 값을 작성해주자.
	cout << "Hello inha!" << endl;

	// 함수를 종료하는 return 문, 이 줄이 실행이 되면 main함수가 종료된다.
	return 0;
}
