#include <iostream>
using namespace std;
class chobab
{
public:
	chobab(int,int);
	void howmanyal()
	{
		if (sool==1||time<12||time>16)
		{
			babal = 280;
		}
		else
		{
			babal = 320;
		}
	}
	int babalis()
	{
		return babal;
	}
private:
	int time;
	int sool;
	int babal;
};

chobab::chobab(int t,int s)
{
	time = t;
	sool = s;
}
int main()
{
	int t, s;
	cin >> t >> s;
	chobab c(t, s);
	c.howmanyal();
	cout << c.babalis();


}