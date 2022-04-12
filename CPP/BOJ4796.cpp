#include <iostream>
using namespace std;

int main() {
    int L, P, V;
    int i = 1;

    while(1) {
        cin >> L >> P >> V;

        if(L == 0 && P == 0 && V == 0) break;

        int num = V / P * L;
        int res = V % P > L ? L : V % P;
        int ans = num + res;
        
        cout << "Case " << i << ": " << ans << endl;

        i++;
    }

    return 0;
}