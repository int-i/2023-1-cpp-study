// 27294번
#include <iostream>
using namespace std;

class 초밥_장인
{
public:
	초밥_장인(int t, int s)
	{
		time = t;
		drink = s;
	}
	void 밥알갯수()
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
	
	초밥_장인 동우(t, s);
	동우.밥알갯수();
}