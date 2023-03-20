#include <iostream>
using namespace std;
int main()
{
	int N = 1, X = 0;
	cin >> N;
	cin >> X;
	int* ar = new int[N];
	for (int a = 0; a < N; a++)
	{
		cin >> ar[a];
	}
	for (int b = 0; b < N; b++)
	{
		if (ar[b] < X)
		{
			cout << ar[b] << " ";
		}
	}
}