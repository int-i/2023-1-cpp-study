#include <iostream>
using namespace std;



void calculation(int pieces[], int ans[], int arraySize) {
	for (int i = 0; i < arraySize; i++)
	{
		cin >> ans[i];
		ans[i] -= pieces[i];
	}
}

void returnResult(int ans[], int arraySize) {
	for (int i = 0; i < arraySize; i++)
	{
		cout << -ans[i] << " ";
	}
}

int main() {
	int pieces[6] = { 1, 1, 2, 2, 2, 8 };
	int ans[6];
	
	calculation(pieces, ans, 6);
	returnResult(ans, 6);

	return 0;
	
	
	
	/*
	int pieces[6] = { 1,1, 2, 2, 2, 8 };
	int ans[6];
	for (int i = 0; i < 6; i++)
	{
		cin >> ans[i];
		ans[i] -= pieces[i];
	}
	for (int i = 0; i < 6; i++)
	{
		cout << -answer[i] << " ";

	}
	return 0;
	*/
}