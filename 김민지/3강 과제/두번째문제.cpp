#include <iostream>
using namespace std;
#include "�ʹ�����.h"

�ʹ�����::�ʹ�����(int hour, int drink):houra(hour),drinka(drink){}

int �ʹ�����::riceAmount() {
	int riceamount = 0;
	if (houra <= 11) {
		riceamount = 280;
	}
	else if (houra <= 16&&houra>=12) {
		riceamount = 320;
	}
	else {
		riceamount = 280;
	}
	if (drinka == 1) {
		riceamount = 280;
	}
	if (drinka == 0 && (houra <= 16 && houra >= 12)) {
		riceamount = 320;
	}
	return riceamount;
}
int main() {
	int hour, drink;
	cin >> hour >> drink;
	�ʹ����� sushi(hour, drink);
	std::cout << sushi.riceAmount() << std::endl;
	return 0;
}