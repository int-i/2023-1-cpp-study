//10871¹ø
#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n, x;
	int arr1[10000];
	cin >> n >> x;

	for (int i = 0; i < n; i++)
	{
		cin >> arr1[i];
	}

	for (int i = 0; i < n; i++)
	{
		if (arr1[i] < x)
		{
			cout << arr1[i] << " ";
		}
	}
	return 0;
}