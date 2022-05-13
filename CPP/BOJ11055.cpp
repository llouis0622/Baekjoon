#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cin >> N;

    int dp[1001];
    int arr[1001];
    int ans = 0;

    for(int i = 0; i < N; ++i) {
        cin >> arr[i];

        dp[i] = arr[i];
    }
    
    for(int i = 0; i < N; ++i) {
        for(int j = 0; j < i; ++j) {
            if(arr[i] > arr[j]) dp[i] = max(dp[i], dp[j] + arr[i]);
        }

        ans = max(ans, dp[i]);
    }

    cout << ans << endl;

    return 0;
}