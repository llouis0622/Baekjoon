#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int dp[1001];
    int arr[1001];
    int num = 0;

    for(int i = 0; i < N; ++i) {
        cin >> arr[i];
    }

    for(int i = 0; i < N; ++i) {
        dp[i] = 1;

        for(int j = 0; j < i; ++j) {
            if(arr[i] < arr[j]) dp[i] = max(dp[i], dp[j] + 1);
        }

        num = max(num, dp[i]);
    }

    cout << num << endl;

    return 0;
}