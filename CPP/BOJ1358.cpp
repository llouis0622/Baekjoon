#include <iostream>
using namespace std;

int main() {
    int W, H, X, Y, P;
    cin >> W >> H >> X >> Y >> P;

    int cnt = 0;

    for(int i = 0; i < P; ++i) {
        int A, B;
        cin >> A >> B;

        if((A - X) * (A - X) + (B - (Y + H / 2)) * (B - (Y + H / 2)) <= (H / 2) * (H / 2) && A < X) cnt++;

        else if(X <= A && A <= X + W && Y <= B && B <= Y + H) cnt++;

        else if((A - (X + W)) * (A - (W + X)) + (B - (Y + H / 2)) * (B - (Y + H / 2)) <= (H / 2) * (H / 2) && X + W < A) cnt++;
    }

    cout << cnt;

    return 0;
}