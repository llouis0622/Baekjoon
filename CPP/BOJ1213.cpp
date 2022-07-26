#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int arr[27];
string str, tmp;

int main() {
    string s;
    cin >> s;
    for (char i : s) {
        arr[i]++;
    }

    for (char i = 'A'; i <= 'Z'; ++i) {
        if (arr[i] % 2) str += i;

        for (int j = 0; j < arr[i] / 2; ++j) tmp += i;
    }

    if (str.size() > 1) cout << "I'm Sorry Hansoo";

    else {
        cout << tmp;
        cout << str;

        reverse(tmp.begin(), tmp.end());
        
        cout << tmp;
    }
}