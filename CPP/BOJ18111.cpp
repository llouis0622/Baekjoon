#include <iostream>
using namespace std;

int main() {
    int N, M, B;
    cin >> N >> M >> B;

    int arr[501][501];
    int max;
    int ans = 0x7f7f7f7f;

    for(int i = 0; i < N; ++i) {
        for(int j = 0; j < M; ++j) {
            cin >> arr[i][j];
        }
    }

    for(int k = 0; k <= 256; ++k) {
        int num = 0;
        int cnt = 0;

        for(int i = 0; i < N; ++i) {
            for(int j = 0; j < M; ++j) {
                int H = arr[i][j] - k;

                if(H > 0) cnt += H;
                else if(H < 0) num -= H;
            }
        }

        if(cnt + B >= num) {
            int res = 2 * cnt + num;

            if(ans >= res) {
                ans = res;
                max = k;
            }
        }
    }

    cout << ans << " " << max;

    return 0;
}