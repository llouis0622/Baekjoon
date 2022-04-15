#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int arr[101];
    int num = 3;

    arr[1] = 2;
    arr[2] = 4;

    for(int i = 3; i < N + 1; ++i) {
        arr[i] = arr[i - 1] + num;

        if(i % 3 != 0) num += 1;
    }

    cout << arr[N];

    return 0;
}