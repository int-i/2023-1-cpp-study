#include <iostream>
using std::cin;
using std::cout;
using namespace std;

int main() {

	int N;
	int X;
	cout << "������ ũ�⸦ ���Ͻÿ�." << endl;
	cin >> N;
	cout << "������ �Ǵ� ���� �Է��Ͻÿ�." << endl;
	cin >> X;
	cout << N << " ";
	cout << X << endl;
	int in;
	int out{};
	cout << "������ �Է��Ͻÿ�." << endl;
	for (int i = 1; i <= N; ++i) {
		cin >> in;
		if (in < X)
			cout << in << ' ';
	}




	return 0;
}