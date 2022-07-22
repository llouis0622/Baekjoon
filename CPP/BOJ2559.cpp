#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, K;
	cin >> N >> K;

    int arr[100000];

	for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

	int sum = 0;
	int tmp = 0;
	int res = -1e9;

	for (int i = 0; i < N; ++i) {
		sum += arr[i];
		tmp++;

		if (tmp == K) {
			res = max(res, sum);
			sum -= arr[i - K + 1];
			tmp--;
		}
	}

	cout << res;

    return 0;
}