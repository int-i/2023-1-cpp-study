#include <iostream>
#include <algorithm>
using namespace std;

int main() {

	int N; //���� �� ���� ��
	cin >> N;

	float sc[1000];

	for (int i = 0; i < N; i++) { //���� �ʱ�ȭ
		cin >> sc[i];
	}

	sort(sc, sc + N); // �з� -> �ְ� ���ϱ�


	float high_sc = sc[N - 1]; //�ְ�

	for (int i = 0; i < N; i++) { //���� ����
		sc[i] = sc[i] / high_sc * 100;
	}

	for (int i = 1; i < N; i++) { //���۵� ���� ��
		sc[i] = sc[i] + sc[i - 1];
	}

	float rst = sc[N - 1] / N; //��� -> �ڵ� ���

	cout << rst;



	return 0;
}