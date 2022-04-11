#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string str;
    cin >> str;

    int cnt1 = 0;
    int cnt2 = 0;

    for(int i = 0; i < str.length(); ++i) {
        if(str[i] != str[i + 1]) {
            if(str[i] == '0') cnt1++;
            else cnt2++;
        }
    }

    cout << min(cnt1, cnt2);

    return 0;
}