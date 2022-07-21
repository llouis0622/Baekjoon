#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int arr[10001];
    int str[10001];

    int N;
    cin >> N;

    for (int i = 1; i < N + 1; ++i) {
        cin >> str[i];
    }

    arr[1] = str[1];
    arr[2] = str[1] + str[2];

    for (int i = 3; i < N + 1; ++i) {
        arr[i] = arr[i - 1];
        arr[i] = max(arr[i], arr[i - 2] + str[i]);
        arr[i] = max(arr[i], arr[i - 3] + str[i - 1] + str[i]);
    }

    cout << arr[N];

    return 0;
}