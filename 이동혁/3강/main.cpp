#include <iostream>
using namespace std;

int lineFunc(int); //�Լ� ����


int main() {
	int result = 0;
	result = lineFunc(10);
	cout << result;


	return 0;
}




int lineFunc(int x)
{
	return 2 * x + 1;

}
