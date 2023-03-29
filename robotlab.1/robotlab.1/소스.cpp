
#include <iostream>


int a = 5;
int b = 7;
int result = 0;


int main() {
	if (a < b) {
		result = a - b;
	}
	else {
		result = b - a;

	}

	std::cout << result  << std::endl;


}