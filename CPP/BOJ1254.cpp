#include <bits/stdc++.h>
using namespace std;

string s;
int num;

bool bl(string ss) {
    for (int i = 0; i < ss.size() / 2; ++i)
        if (ss[i] != ss[ss.size() - 1 - i]) return false;
    return true;
}

int main() {
    cin >> s;
    
    for (int i = 0; i < s.size(); ++i) {
        if (bl(s.substr(i))) num = max(num, (int)s.size() - i);
    }
    
    cout << (s.size() - num) * 2 + num;
    
    return 0;
}