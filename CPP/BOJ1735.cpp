#include <iostream>
using namespace std;

int GCD(int X, int Y) {
	return Y ? GCD(Y, X % Y) : X;
}

int main() {
    int A, B, C, D;
    cin >> A >> B >> C >> D;

    int M = A * D + B * C;
    int N = B * D;

    cout << M / GCD(M, N) << " " << N / GCD(M, N);

    return 0;
}