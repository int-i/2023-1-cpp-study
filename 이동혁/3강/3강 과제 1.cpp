#include <iostream>
using namespace std;

int kk(int);
int lbk(int);
int p(int);


int main() {

	int arr[6];
	for (int i = 0; i < 6; i++) {
		cin >> arr[i];
	}

	cout << kk(arr[0]) << " " << kk(arr[1]) << " " << lbk(arr[2]) << " " << lbk(arr[3]) << " " << lbk(arr[4]) << " " << p(arr[5]);

	return 0;
}

int kk(int x)
{
	return 1 - x;
}

int lbk(int x)
{
	return 2 - x;
}

int p(int x)
{
	return 8 - x;
}
