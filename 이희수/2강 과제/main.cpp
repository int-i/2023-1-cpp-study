#include <iostream>
using namespace std;
#define MAX 10000

int main() {
	int N, X;
	cin >> N >> X;
	int arr[MAX];
	for (int i = 0;i < N;i++) {
		cin >> arr[i];
	}
	for (int i = 0;i < N;i++) {
		if (arr[i] < X)
			cout << arr[i] << " ";
	}
	return 0;
}