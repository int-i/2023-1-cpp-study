// 과제 1 백준 3003번

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

constexpr int NumberOfMember = 6;

// 반환값이 없고, int 배열을 인자로 받는 함수
// 배열에 대한 설명은 여기 참조
// https://boycoding.tistory.com/193
void calculator(int[NumberOfMember]);

int main() {
	int chessPieces[NumberOfMember] = { }; // NumberOfMember 크기의 배열을 0으로 초기화
	for (int i = 0; i < NumberOfMember; ++i)
		cin >> chessPieces[i]; // 배열에 값 하나씩 집어넣기

	calculator(chessPieces);

	return 0;
}

void calculator(int chessPieces[NumberOfMember]) {
	// TODO: 여기에 문제 풀이 작성
	int a[6];
	a[0] = 1 - chessPieces[0];
	a[1] = 1 - chessPieces[1];
	a[2] = 2 - chessPieces[2];
	a[3] = 2 - chessPieces[3];
	a[4] = 2 - chessPieces[4];
	a[5] = 8 - chessPieces[5];
	for (int i = 0; i < NumberOfMember; i++) {
		cout << a[i] << " ";
	}
	// Hint: for문, if문 쓸 필요 없이 출력문과 간단한 사칙연산 기호만으로도 문제를 해결 할 수 있다.
}