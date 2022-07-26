#include <iostream>
#include <string>
using namespace std;

int main() {
    int N;
    cin >> N;

    string s;
    cin >> s;

    int cnt = 0;

    for (int i = 0; i < s.length(); ++i) {
        if (s.at(i) == 'C') cnt++;
    }

    cout << cnt / (N - cnt + 1) + (cnt % (N - cnt + 1) != 0 ? 1 : 0);
}