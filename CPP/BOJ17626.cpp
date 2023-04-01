#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
    cout.tie(0);

    int N;
	cin >> N;
    
    int DP[50001] = {};

	DP[1] = 1;

	for(int i = 1; i <= N; ++i) {
		DP[i] = DP[1] + DP[i - 1];
        
		for(int j = 2; j * j <= i; ++j)
            DP[i] = min(DP[i], 1 + DP[i - j * j]);
	}

	cout << DP[N];
    
    return 0;
}