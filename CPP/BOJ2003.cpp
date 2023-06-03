#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M, num, cnt = 0;
    cin >> N >> M;

    int A[N + 1];

    for(int i = 0; i < N; ++i)
        cin >> A[i];

    for(int i = 0; i < N; ++i) {
        for(int j = i; j < N; ++j) {
            num += A[j];

            if(num == M) {
                cnt++;
                num == 0;
                break;
            }
        }
        
        if(num != 0) num = 0;
    }   

    cout<< cnt;
    
    return 0;
}