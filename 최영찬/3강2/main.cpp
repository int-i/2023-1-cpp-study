#include <iostream>

using namespace std;

class Sushi
{
private:
    int Time;
    bool Drink;
public:
    Sushi(int Time, bool Drink)
    {
        this->Time = Time;
        this->Drink = Drink;
    }
    int rice()
    {
        if (Time >= 12 && Time <= 16 && !Drink)
        {
            return 320;
        }
        else
        {
            return 280;
        }
    }
};
int main()
{
    int Time;
    bool Drink;
    cin >> Time >> Drink;
    Sushi sushi(Time, Drink);
    cout << sushi.rice();
    return 0;
}
