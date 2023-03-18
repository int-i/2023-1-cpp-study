#include <iostream>

using namespace std;

int main() {

    int N, X; 
    int A[10000]; 
    
    cout << "N과 X 입력" << endl;
    cin >> N >> X; // N과 X 입력
    
    cout << "수열 입력" << endl;

    for (int i = 0; i < N; i++) 
    {         
        cin >> A[i]; // 원소 입력
        
        // 원소 비교
        if (A[i] < X) 
        { 
            cout << A[i] << " ";
        }
    }

    return 0;
}