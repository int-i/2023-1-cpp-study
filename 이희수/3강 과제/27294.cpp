#include <iostream>
using namespace std;

class Sushi_master {
public:
    void sushi(int _time, int _alcohol) {
        T = _time;
        S = _alcohol;
    }

    int rice() {
        if (T <= 11 || (T >= 17 && T <= 23)) {
            return 280;
        }
        else if (T >= 12 && T <= 16 && S == 0) {
            return 320;
        }
        else {
            return 280;
        }
    }

private:
    int T;
    int S;
};

int main() {
    Sushi_master sushi;
    int T, S;
    cin >> T >> S;

    sushi.sushi(T, S);
    cout << sushi.rice() << endl;

    return 0;
}