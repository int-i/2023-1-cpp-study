#include <iostream>
using std::cin;
using std::cout;
using namespace std;

int main() {

	int N;
	int X;
	cout << "수열의 크기를 정하시오." << endl;
	cin >> N;
	cout << "기준이 되는 수를 입력하시오." << endl;
	cin >> X;
	cout << N << " ";
	cout << X << endl;
	int in;
	int out{};
	cout << "수열을 입력하시오." << endl;
	for (int i = 1; i <= N; ++i) {
		cin >> in;
		if (in < X)
			cout << in << ' ';
	}




	return 0;
}