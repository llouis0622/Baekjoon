#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> vtr;
    long long ans = 0;

    for(int i = 0; i < N; ++i) {
        int num;
        cin >> num;

        vtr.push_back(num);
    }

    sort(vtr.begin(), vtr.end());

    for(int i = 0; i < N; ++i) {
        ans += abs((i + 1) - vtr[i]);
    }

    cout << ans;

    return 0;
}