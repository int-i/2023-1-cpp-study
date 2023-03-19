#include <iostream>
using namespace std;
int main() {
	int n;
	int x;
	int a;
	cin >> n >> x >> a;

	for (int i = 0; i < n; ++i) {
		cin >> a;
		if (a < x)
			cout << a << " " << endl;
	}
	return 0;
}