#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int N, M;
    cin >> N >> M;

    int X = 0;
    int Y = 0;

    for(ll i = 2; i <= N; i *= 2) {
        X += N / i;
    }

    for(ll i = 2; i <= M; i *= 2) {
        X -= M / i;
    }

    for(ll i = 2; i <= (N - M); i *= 2) {
        X -= (N - M) / i;
    }

    for(ll i = 5; i <= N; i *= 5) {
        Y += N / i;
    }

    for(ll i = 5; i <= M; i *= 5) {
        Y -= M / i;
    }

    for(ll i = 5; i <= (N - M); i *= 5) {
        Y -= (N - M) / i;
    }

    cout << min(X, Y);

    return 0;
}