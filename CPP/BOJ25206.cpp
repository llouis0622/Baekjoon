#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(0);
    
    map<string, double> m = {{"A+", 4.5}, {"A0", 4.0}, {"B+", 3.5}, {"B0", 3.0}, {"C+", 2.5}, {"C0", 2.0}, {"D+", 1.5}, {"D0", 1.0}, {"F", 0.0}};
    
    double res = 0, sum = 0;
    
    for(int i = 1; i <= 20; ++i) {
        string n, g;
        double s;
        
        cin >> n >> s >> g;
        
        if(g == "P") continue;
        
        res += s * m[g];
        sum += s;
    }
    
    res /= sum;
    
    cout << fixed << setprecision(4) << result;
    
    return 0;
}