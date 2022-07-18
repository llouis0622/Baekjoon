#include <iostream>
using namespace std;

int main() {
	int arr[101][10] = {};
	int sum = 0;

    int n;
	cin >> n;

	for (int i = 0; i < 10; ++i) {
        arr[1][i] = 1;
    }
		
	for (int i = 2; i <= n; ++i) {
		for (int j = 0; j < 10; ++j) {
			if (j == 0) arr[i][0] = arr[i - 1][1];
			else if (j == 9) arr[i][9] = arr[i - 1][8];
			else arr[i][j] = (arr[i - 1][j - 1] + arr[i - 1][j + 1]) % 1000000000;
		}
	}

	for (int i = 1; i < 10; ++i) {
        sum = (sum + arr[n][i]) % 1000000000;
    }

	cout << sum % 1000000000;

    return 0;
}