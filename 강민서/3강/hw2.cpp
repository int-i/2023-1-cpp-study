#include <iostream>
using namespace std;
class �ʹ�_���� {
public:
	�ʹ�_����(int T, bool S) {
		this->T = T;
		this->S = S;
	}
	
	int ���_����() {
		if (T <= 11 or 16 < T or S)
			return 280;
		else
			return 320;
	}

private:
	int T;
	bool S;
};

int main() {
	int T{}; 
	cin >> T;
	bool S{};
	cin >> S;

	�ʹ�_���� ���μ�{ T, S };
	cout << ���μ�.���_����() << endl;
}