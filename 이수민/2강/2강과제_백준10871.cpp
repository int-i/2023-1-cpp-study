#include<iostream>
using namespace std;


int X , N;
int arr[] = { 0 };

int main() {
	cin >> N >> X;
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}
	for (int i = 0; i < N; i++) {
		if (arr[i] < X) {
			cout << arr[i] << " ";
		}
	}
	return 0;
}
