#include <iostream>
#include <cmath>
using namespace std;

bool bl(int a) {
    if(a < 2) return false; // 2보다 작으면 소수 X

    for(int i = 2; i <= sqrt(a); ++i) { // 2이상 소수 찾기
        if(a % i == 0) return false;
    }

    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int M, N;
    cin >> M >> N;

    for(int i = M; i <= N; ++i) { // M ~ N 범위의 소수 출력
        if(bl(i)) cout << i << "\n";
    }

    return 0;
}