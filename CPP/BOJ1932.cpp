#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	int N;
    cin >> N;

    int dp[501][501];
    int num = 0;
	
	for(int i = 0; i < N; ++i) {
        for(int j = 0; j <= i; ++j) {
            cin >> dp[i][j];
        }
    }

    for(int i = 0; i < N; ++i) {
        for(int j = 0; j <= i; ++j) {
            if(j == 0) dp[i][j] = dp[i - 1][0] + dp[i][j];

            else if(i == j) dp[i][j] = dp[i - 1][j - 1] + dp[i][j];

            else dp[i][j] = max(dp[i - 1][j - 1] + dp[i][j], dp[i - 1][j] + dp[i][j]);

            num = max(num, dp[i][j]);
        }
    }

    cout << num;
	
	return 0;
}