// 3003¹ø
#include <iostream>
using namespace std;

constexpr int n = 6;

void calculator(int[n]);

int main()
{
	int chessPieces[n] = {};
	for (int i = 0; i < n; i++)
	{
		cin >> chessPieces[i];
	}

	calculator(chessPieces);
}

void calculator(int chessPieces[n])
{	
	int originalPieces[6] = { 1,1,2,2,2,8 };

	for (int j = 0; j < n; j++)
	{
		cout << originalPieces[j] - chessPieces[j] << " ";
	}
}