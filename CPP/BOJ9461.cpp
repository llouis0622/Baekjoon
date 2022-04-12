#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    long long DP[101];

    for(int i = 0; i < T; ++i) {
        int N;
        cin >> N;

        DP[0] = 1;
        DP[1] = 1;
        DP[2] = 1;
        DP[3] = 1;
        DP[4] = 2;
        DP[5] = 2;

        for(int j = 6; j <= N; ++j) {
            DP[j] = DP[j - 1] + DP[j - 5];
        }

        cout << DP[N] << endl;
    }

    return 0;
}