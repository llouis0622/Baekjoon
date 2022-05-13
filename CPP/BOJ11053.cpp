#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;

    int dp[1001];
    int arr[1001];
    int cnt = 0;

    for(int i = 0; i < N; ++i) {
        cin >> arr[i];
    }

    for(int i = 0; i < N; ++i) {
        dp[i] = 1;
        
        for(int j = 0; j < i; ++j) {
            if(arr[i] > arr[j]) dp[i] = max(dp[i], dp[j] + 1);
        }

        cnt = max(cnt, dp[i]);
    }

    cout << cnt << endl;

    return 0;
}