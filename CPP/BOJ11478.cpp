#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    string s, str = "";
    cin >> s;
 
    set<string> ss;
    
    for (int i = 0; i < s.size(); ++i) {
        for (int j = i; j < s.size(); ++j) {
            str += s[j];
            ss.insert(str);
        }
    
        str = "";
    }
 
    cout << ss.size();
    
    return 0;
}