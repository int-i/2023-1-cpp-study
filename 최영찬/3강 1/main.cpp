#include <iostream>
using namespace std;
int chessn(int a);
int main()
{
    int chess[6];
    for (int i = 0; i < 6; i++)
    {
        cin >> chess[i];
        cout << chessn(i) - chess[i] << " ";
    }
    return 0;

}
int chessn(int a)
{
    int standard[6] = { 1, 1, 2, 2, 2, 8 };
    int aa = standard[a];
    return aa;
}
