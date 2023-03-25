#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
    cout.tie(0);
    
    int DP[10001] = {0};

	int N, K;
	cin >> N >> K;
    
	vector<int> v(N + 1);
    
	for(int i = 1; i <= N; ++i)
        cin >> v[i];

	for(int i = 1; i <= K; ++i)
        DP[i] = 10001;

	for(int i = 1; i <= N; ++i) {
		for(int j = v[i]; j <= K; ++j)
            DP[j] = min(DP[j], DP[j - v[i]] + 1);
	}

	if(DP[K] == 10001) cout << -1;
	else cout << DP[K];
    
    return 0;
}