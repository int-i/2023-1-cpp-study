#include <iostream>
using namespace std;

constexpr int NumberofMember = 6;
int chess[NumberofMember] = { 1,1,2,2,2,8 };
void calculator(int[NumberofMember]);
int main()
{
	int chessPieces[NumberofMember] = {};
	for (int i = 0; i < NumberofMember; i++)
	{
		cin >> chessPieces[i];
	}
	calculator(chessPieces);

	return 0;
}
void calculator(int chessPieces[NumberofMember]) {
	for (int i = 0; i < NumberofMember; i++)
	{
		cout << chess[i] - chessPieces[i] << " ";
	}
}