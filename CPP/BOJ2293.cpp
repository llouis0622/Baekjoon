#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(0);
    
    int N, K;
	cin >> N >> K;
    
    vector<int> v(N);
    vector<int> DP(K + 1);
    
	for(int i = 0; i < N; ++i)
		cin >> v[i];

	DP[0] = 1;
    
	for(int i = 0; i < N; ++i) {
		for(int j = v[i]; j <= K; ++j) { 
			DP[j] += DP[j - v[i]];
		}
	}

	cout << DP[K];
    
	return 0;
}