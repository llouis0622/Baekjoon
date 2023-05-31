#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
	
	map<string, string> m;
	
	int N, M;
	cin >> N >> M;
	
	string s;
	string str;
    
	while (N--) {
		cin >> s >> str;
        
		m.insert(make_pair(s, str));
	}
    
	while (M--) {
		cin >> s;
		cout << m[s] << '\n';
	}
	
	return 0;
}