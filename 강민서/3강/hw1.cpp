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
	int king, queen, rook, bishop, knight, pawn; //각 함수 생성
	cin >> king >> queen >> rook >> bishop >> knight >> pawn; //입력될 값(동혁이가 찾은 피스) 
	cout << 1 - king << 1 - queen << 2 - rook << 2 - bishop << 2 - knight << 8 - pawn; //출력될 값(각 필요한 개수-동혁이가 찾은 개수=최종 세트 개수)

	// TODO: 여기에 문제 풀이 작성
	// Hint: for문, if문 쓸 필요 없이 출력문과 간단한 사칙연산 기호만으로도 문제를 해결 할 수 있다.
}

