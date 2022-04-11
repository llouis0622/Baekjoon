#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cin >> N;

    int arr[100001];

    for(int i = 0; i < N; ++i) {
        cin >> arr[i];
    }

    sort(arr, arr + N, greater<>());
    
    int max = 0;
    int res = 0;

    for(int i = 1; i <= N; ++i) {
        if(arr[i - 1] * i > max) max = arr[i - 1] * i;
    }

    res = max;

    cout << res;

    return 0;
}