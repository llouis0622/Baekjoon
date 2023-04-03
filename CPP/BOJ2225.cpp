#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int N, K;
    cin >> N >> K;
    
    int arr[201][201] = {};

    for (int i = 0; i <= K; ++i)
        arr[1][i] = i;
    
    for (int i = 2; i <= N; ++i)
        for (int j = 1; j <= K; ++j)
            arr[i][j] = (arr[i - 1][j] + arr[i][j - 1]) % 1000000000;
        
    cout << arr[N][K];
    
    return 0;
}