//���� N���� �̷���� ���� A . �̶� A���� X���� �������� ��� ���

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