#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cin >> N;

    int cnt = 0;
    int num = 0;

    vector<pair<int, int>> vtr(N);

    for(int i = 0; i < N; ++i) {
        cin >> vtr[i].second >> vtr[i].first;
    }

    sort(vtr.begin(), vtr.end());

    for(int i = 0; i <= N; ++i) {
        if(num <= vtr[i].second) {
            num = vtr[i].first;
            cnt++;
        }
    }

    cout << cnt;

    return 0;
}