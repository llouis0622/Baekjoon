#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int M;
    cin >> M;

    string s;

    int tmp, num = 0;

    while (M--) {
        cin >> s;

        if (s == "add") {
            cin >> tmp;

            num |= (1 << tmp);
        }

        else if (s == "remove") {
            cin >> tmp;

            num &= ~(1 << tmp);
        }

        else if (s == "check") {
            cin >> tmp;

            if (num & (1 << tmp)) cout << 1 << '\n';
            else cout << 0 << '\n';
        }

        else if (s == "toggle") {
            cin >> tmp;

            num ^= (1 << tmp);
        }

        else if (s == "all") num = (1 << 21) - 1;
        else if (s == "empty") num = 0;
    }

    return 0;
}