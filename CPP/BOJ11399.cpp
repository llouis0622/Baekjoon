#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cin >> N;

    int arr[1001];

    for(int i = 0; i < N; ++i) {
        cin >> arr[i];
    }

    sort(arr, arr + N);

    int sum = 0;

    for(int i = 0; i < N; ++i) {
        for(int j = 0; j <= i; ++j) {
            sum += arr[j];
        }
    }

    cout << sum;

    return 0;
}