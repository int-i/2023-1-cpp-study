#include <iostream>

using namespace std;

int main() {

    int N, X; 
    int A[10000]; 
    
    cout << "N�� X �Է�" << endl;
    cin >> N >> X; // N�� X �Է�
    
    cout << "���� �Է�" << endl;

    for (int i = 0; i < N; i++) 
    {         
        cin >> A[i]; // ���� �Է�
        
        // ���� ��
        if (A[i] < X) 
        { 
            cout << A[i] << " ";
        }
    }

    return 0;
}