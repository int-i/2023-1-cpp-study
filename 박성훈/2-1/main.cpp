#include <iostream>
using namespace std;

int main() {
	int N = 0;
	int X = 0;
	int A = 0;
	cin >> N >> X;
	for (int i = 1; i <= N; ++i) {
	  cin >> A;
	  if (A < X) {
		  cout << A << " ";
	  }
	}
	return 0;
}