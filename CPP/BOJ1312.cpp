#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
    cout.tie(0);
    
	int A, B, C, num = 0;
	cin >> A >> B >> C;
    
	while (C--) {
		A %= B;
		A *= 10;
		num = A / B;
	}
    
	cout << num;
    
	return 0;
}