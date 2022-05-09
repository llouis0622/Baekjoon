#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int cnt = 0;
    int N;
    cin >> N;

    for(int i = 0; i < N; ++i) {
        bool bl = true; // 소수 판별

        int A;
        cin >> A;

        if(A == 1) continue; // 1이면 그대로 진행

        for(int j = 2; j <= sqrt(A); ++j) { // 2부터 소수 판별
            if(A % j == 0) {
                bl = false;

                break;
            }
        }

        if(bl) cnt++; // true면 cnt 증가
    }

    cout << cnt;
}