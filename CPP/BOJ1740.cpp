#include <iostream>
#include <queue>
typedef long long ll;
using namespace std;

int main() {
    ll N;
    cin >> N;

    queue<int> q;

    while (N > 1) {
        q.push(N % 2);
        N /= 2;
    }

    q.push(N);

    ll ans = 0;
    ll num = 1;

    while (!q.empty()) {
        ans += q.front() * num;
        num *= 3;
        q.pop();
    }

    cout << ans;

    return 0;
}