#include <iostream>
using namespace std;

int main() {
	int N, X;
	cin >> N >> X;

	int e;
	for (int i = 0; i < N; i++) {

		cin >> e;
		if (e < X)
			cout << e << ' ';

	}


	return 0;
}