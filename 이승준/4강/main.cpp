#include <iostream>

using namespace std;

int main() {
    double sum = 0;
    int hscore = 0;
    int n = 0;
    cout << "과목의 개수를 입력하시오." << endl;
    cin >> n;
    float score[1000];
    cout << "각 과목의 점수를 입력하시오." << endl;
    for (int i = 0; i < n; i++) {
        cin >> score[i]; //점수 입력 받기
    }
    for (int i = 0; i < n; i++) {
        if (score[i] >= hscore) {
            hscore = score[i];
            //최고점 찾기
        }
    }
    for (int i = 0; i < n; i++) {
        sum += 100 * score[i] / hscore; //각 점수 고치고 더하기
    }
    cout << sum / n;


}