// 27294��
#include <iostream>
using namespace std;

class �ʹ�_����
{
public:
	�ʹ�_����(int t, int s)
	{
		time = t;
		drink = s;
	}
	void ��˰���()
	{
		if (time >= 12 && time <= 16 && drink == 0)
		{
			cout << "320";
		}
		else
		{
			cout << "280";
		}
	}
private:
	int time;
	int drink;
};

int main()
{
	int t, s;
	cin >> t >> s;
	
	�ʹ�_���� ����(t, s);
	����.��˰���();
}