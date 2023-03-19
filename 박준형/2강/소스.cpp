//정수 N개로 이루어진 수열 A . 이때 A에서 X보다 작은수를 모두 출력

#include<iostream>

using namespace std;

int main() {
	int N, X;
	int A;
	cin >> N;
	cin >> X;

	for (int i = 0; i < N; i++) {
		cin >> A;
		if (A < X)
			cout << A << " ";
	}

}