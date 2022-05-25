#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s;
    cin >> s;

    list<char> l;

    for(int i = 0; i < s.size(); ++i) {
        l.push_back(s.at(i));
    }

    list<char>::iterator x = l.end();

    int N;
    cin >> N;

    for(int i = 0; i < N; ++i) {
        char c;
        cin >> c;

        if(c == 'L') {
            if(x != l.begin()) x--;
        }

        else if(c == 'D') {
            if(x != l.end()) x++;
        }

        else if(c == 'B') {
            if(x != l.begin()) x = l.erase(--x);
        }

        else if(c == 'P') {
            char ch;
            cin >> ch;

            l.insert(x, ch);
        }
    }

    for(list<char>::iterator i = l.begin(); i != l.end(); ++i) {
        cout << *i;
    }

    return 0;
}