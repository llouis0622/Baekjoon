#include <bits/stdc++.h>
using namespace std;

double X, Y;

int main() {
    ios_base::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);
    
    double X, Y;
    cin >> X >> Y;
    
    double Z = floor(100 * Y / X);
    
    if(Z >= (double)99) cout << -1 << '\n';
    else {
        int ans = (int)ceil((X * Z + X - 100 * Y) / (99 - Z));
        cout << ans << '\n';
    }
    
    return 0;
}