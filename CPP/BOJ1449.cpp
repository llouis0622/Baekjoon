#include<iostream>
#include<algorithm>
using namespace std;
 
int arr[1001];

int main() {
	int N, L;
	cin >> N >> L;
 
	for(int i = 0; i < N; ++i) {
        cin >> arr[i];
    }
 
	sort(arr, arr + N);
 
	int num = arr[0];
    int res = 1;
 
	for(int i = 0; i < N; ++i) {
		if(arr[i] - num + 1 > L) {
			res++;
			num = arr[i];
		}
	}
 
	cout << res;

	return 0;
}