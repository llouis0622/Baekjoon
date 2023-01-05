#include <iostream>

using namespace std;

int main() {
	int N;
    cin >> N;

    long long dp[36] = {1};

    for (int i = 1; i < 36; ++i) {
        for (int j = 0; j < i; ++j) {
            dp[i] += dp[j] * dp[i - 1 - j];
        }
    }

    cout << dp[N] << "\n";

    return 0;
}