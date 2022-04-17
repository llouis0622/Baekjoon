#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cin >> N;

    int ans = 0;
    int arr[16] = {0};
    int str[16] = {0};
    int vtr[16] = {0};

    for(int i = 1; i <= N; ++i) {
        cin >> vtr[i] >> str[i];

        for(int j = 0; j < i; ++j) {
            if(vtr[j] + j <= i && vtr[i] + i <= N + 1) {
                arr[i] = max(arr[i], arr[j] + str[i]);
            }
        }
    }

    for(int i = 0; i <= N; ++i) {
        ans = max(ans, arr[i]);
    }

    cout << ans;

    return 0;
}