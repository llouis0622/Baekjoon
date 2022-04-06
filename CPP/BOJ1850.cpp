#include <iostream>
using namespace std;

long long GCD(long long X, long long Y) {
    return (X % Y) ? GCD(Y, X % Y) : Y;
}

int main() {
    long long X, Y;
    cin >> X >> Y;

    long long N = GCD(X, Y);

    for(long long i = 0; i < N; ++i) {
        cout << "1";
    }
}