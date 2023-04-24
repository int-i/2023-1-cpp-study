#include <iostream>
#include<vector>
using namespace std;


int main() {
	int N;
	cin >> N;
	vector<int> g(N),ng(N);
	if (N > 1000) {
		cout << "N값은 1000이하이어야합니다."<<endl;
	}
	//int g[1000],ng[1000];
	int M=g[0];	float sum = 0;
	for (int i = 0; i < N; i++) {
		cin >> g[i];
		if (g[i] > M) {	M = g[i];}
		if (g [i]> 100 || g[i] < 0) {cout << "성적은 0~100범위이어야합니다";}
		sum = sum + g[i];
		//sum+=g[i];
	}	
	float newavg = (sum / M * 100)/N;
	cout << newavg<<endl;
	return 0;
}