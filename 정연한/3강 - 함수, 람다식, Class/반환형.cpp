#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int func1(int a) {
	return a * 2;
}

void func2() {
	cout << "���ۿ븸 �����ϴ� �Լ�" << endl;
}

int main() {
	int i = 5;
	cout << func1(i) << endl;
	func2();
	return 0;
}

