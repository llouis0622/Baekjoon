#include <bits/stdc++.h>
using namespace std;

int main() {
    int A, B, C, D, E, F;
    cin >> A >> B >> C >> D >> E >> F;

    if ((A * D - C * B + C * F - E * D + E * B - A * F) / 2 > 0) cout << "1" << endl;
    else if ((A * D - C * B + C * F - E * D + E * B - A * F) / 2 < 0) cout << "-1" << endl;
    else cout << "0" << endl;

    return 0;
}