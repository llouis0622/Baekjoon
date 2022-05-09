#include <iostream>
#include <string>
#include <map>
#include <algorithm>
using namespace std;

map <string, int> m;

int N, cnt;

int main() {
    cin >> N;

    while(N--) {
        string str;
        cin >> str;

        m[str]++;
    }

    for(auto i : m) {
        cnt = max(cnt, i.second);
    }

    for(auto i : m) {
        if(i.second == cnt) {
            cout << i.first; 

            return 0;
        }
    }
}