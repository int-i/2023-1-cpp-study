#include <iostream>
using namespace std;

int main() {
	int N = 0;
	int X = 0;

	cin >> N >> X;

	int A = 0;

	for (int i = 0; i < N; i++) {
		cin >> A;
		if (A < X) // A�� X���� �۴ٸ�,
			cout << A << " ";
	}

	return 0;
}