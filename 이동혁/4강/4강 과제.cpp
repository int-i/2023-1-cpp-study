#include <iostream>
#include <algorithm>
using namespace std;

int main() {

	int N; //시험 본 과목 수
	cin >> N;

	float sc[1000];

	for (int i = 0; i < N; i++) { //점수 초기화
		cin >> sc[i];
	}

	sort(sc, sc + N); // 분류 -> 최고값 구하기


	float high_sc = sc[N - 1]; //최고값

	for (int i = 0; i < N; i++) { //점수 조작
		sc[i] = sc[i] / high_sc * 100;
	}

	for (int i = 1; i < N; i++) { //조작된 점수 합
		sc[i] = sc[i] + sc[i - 1];
	}

	float rst = sc[N - 1] / N; //평균 -> 코딩 결과

	cout << rst;



	return 0;
}