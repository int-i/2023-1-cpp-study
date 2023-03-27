// 2강 과제 백준 10871

#include <iostream>
using namespace std;

int main() {

	int N, X;
	cin >> N >> X;

	int ar[10000];

	for (int i = 0; i < N; i++) {
		cin >> ar[i];
	}

	for (int i = 0; i < N; i++) {
		if (ar[i] < X) {
			cout << ar[i] << " ";
		}
	}



}