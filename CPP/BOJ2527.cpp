#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int A, B, C, D, W, X, Y, Z;
    int X1, X2, Y1, Y2, I, J;
    for (int i = 0; i < 4; ++i) {
        cin >> A >> B >> C >> D >> W >> X >> Y >> Z;

        X1 = max(A, W);
        X2 = min(C, Y);
        Y1 = max(B, X);
        Y2 = min(D, Z);
        I = X2 - X1;
        J = Y2 - Y1;

        if (I > 0 && J > 0) cout << 'a' << endl;
        else if (I < 0  || J < 0) cout << 'd' << endl;
        else if (I == 0 && J == 0) cout << 'c' << endl;
        else cout << 'b' << endl;
    }

    return 0;
}