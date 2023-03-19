#include <iostream>
using namespace std;
 
int main()
{
	int n, num;
	cin >> n >> num;
	int e;
	for (int i = 0; i<n; i++){
		cin >> e;
		if (e < num)
			cout << e << ' ';
	}
	return 0;
}
