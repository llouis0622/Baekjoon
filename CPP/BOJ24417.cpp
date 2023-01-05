#include <iostream>

using namespace std;

const int INF = 1000000007;

int main() {
    int N;
    cin >> N;

    int A = 1, B = 1, C;

    for (int i = 3; i <= N; ++i) {
        C = B;
        B = (A + B) % INF;
        A = C;
    }

    cout << B << ' ' << N - 2;

    return 0;
}