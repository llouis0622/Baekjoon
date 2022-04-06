#include<iostream>
using namespace std;

int N, K;
long long arr[1001][1001];

int main() {
	cin >> N >> K;

	arr[0][0] = 1;
	arr[1][0] = 1;
	arr[1][1] = 1;

	for(int i = 2; i <= N; i++) {
        for(int j = 0; j <= i; j++) {
			if(j == 0) arr[i][0] = 1;
			else if(j == i) arr[i][j] = 1;
			else arr[i][j] = (arr[i - 1][j - 1] + arr[i - 1][j]) % 10007;
		}
    }	

	cout << arr[N][K];
}