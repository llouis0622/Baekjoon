#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    string str;
    cin >> str;

    sort(str.begin(), str.end(), greater<>());

    if(str[str.length() - 1] != '0') cout << "-1";
    else {
        long long cnt = 0;
        
        for(auto i : str) {
            cnt += i - '0';
        }

        if(cnt % 3 == 0) cout << str;
        else cout << "-1";
    }

    return 0;
}