#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
	cin >> N;
    
    int DP[31] = {};
    
	DP[0] = 1;
	DP[1] = 1;
    
	for(int i = 2; i <= N; ++i) {
		DP[i] += DP[i - 1];
		DP[i] += DP[i - 2] * 2; 
	}
    
	if(N % 2) cout << (DP[N] + DP[N / 2]) / 2;
	else cout << (DP[N] + DP[N / 2] + 2 * DP[N / 2 - 1]) / 2; 
}