#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int N;
    cin >> N;

    vector<int> v(N);

    for (int i = 0; i < N; ++i) {
        cin >> v[i];
    }
    
    sort(v.begin(), v.end());

    int M;
    cin >> M;

    for (int i = 0; i < M; ++i) {
        int num;
        cin >> num;

        int s = 0, e = N - 1;

        bool bl = false;

        while (s <= e) {
            int m = (s + e) / 2;

            if (v[m] == num) {
                bl = true;

                break;
            }

            else if (v[m] < num) s = m + 1;

            else e = m - 1;
        }

        if (!bl) cout << 0 << " ";

        else cout << 1 << " ";
    }

    return 0;
}