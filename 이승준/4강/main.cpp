#include <iostream>

using namespace std;

int main() {
    double sum = 0;
    int hscore = 0;
    int n = 0;
    cout << "������ ������ �Է��Ͻÿ�." << endl;
    cin >> n;
    float score[1000];
    cout << "�� ������ ������ �Է��Ͻÿ�." << endl;
    for (int i = 0; i < n; i++) {
        cin >> score[i]; //���� �Է� �ޱ�
    }
    for (int i = 0; i < n; i++) {
        if (score[i] >= hscore) {
            hscore = score[i];
            //�ְ��� ã��
        }
    }
    for (int i = 0; i < n; i++) {
        sum += 100 * score[i] / hscore; //�� ���� ��ġ�� ���ϱ�
    }
    cout << sum / n;


}