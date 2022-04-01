#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int N, M;
    int arr[105][105];
    
    cin >> N >> M;
    int ans = N * M;
    
	for(int i = 1; i <= N; ++i) {
		int sum = 0;
        
		for(int j = 1; j <= M; ++j) {
            cin >> arr[i][j];
            
			if(arr[i][j] > arr[i][j - 1])sum += arr[i][j] - arr[i][j - 1];
		}
        
		ans += sum;
	}

	for(int j = 1; j <= M; ++j) {
		int sum = 0;
        
		for(int i = 1; i <= N; ++i)
			if(arr[i][j] > arr[i-1][j]) sum += arr[i][j] - arr[i-1][j];

		ans += sum;
	}
    
    cout << ans * 2;
}