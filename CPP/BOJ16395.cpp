#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[31][31] = {};
    
    int N, K;
    cin >> N >> K;
    
    for(int i = 0; i < 31; ++i) arr[i][0] = 1;
    
    for(int i = 1; i < 31; ++i) {
        for(int j = 1; j <= i; ++j) {
            arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
        }
    }
    
    cout << arr[N - 1][K - 1];
    
    return 0;
}