#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N;
    cin >> N;

    vector<int> arr(N);

    for(int i = 0; i < N; ++i) {
        cin >> arr[i];
    }

    vector<int> vtr(arr);
    sort(vtr.begin(), vtr.end());
    vtr.erase(unique(vtr.begin(), vtr.end()), vtr.end());

    for(int i = 0; i < N; ++i) {
        auto num = lower_bound(vtr.begin(), vtr.end(), arr[i]);

        cout << num - vtr.begin() << " ";
    }
}