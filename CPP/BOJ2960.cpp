#include <bits/stdc++.h>
using namespace std;

int main() {
	int N, K, cnt = 0;
	cin >> N >> K;
    
	vector<int> v(N + 1);

	for (int i = 2; i <= N; ++i)
        v[i] = i;

	for (int i = 2; i <= N; ++i)
        for (int j = i; j <= N; j += i)
            if (v[j] != 0) {
				v[j] = 0;
				cnt++;
                
				if (cnt == K)
                    cout << j;
			}
    
	return 0;
}