#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int ans = 0;

    if((N % 5) % 2 == 0) ans = N / 5 + N % 5 / 2;
    else if(N / 5 == 0) ans = -1;
    else ans = N / 5 + (N % 5 + 5) / 2 - 1;

    cout << ans;

    return 0;
}