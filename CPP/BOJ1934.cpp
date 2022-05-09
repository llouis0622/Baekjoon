#include <iostream>
using namespace std;

int GCD(int A, int B) { // 최대 공약수 함수
    while(B != 0) {
        int tmp = A % B;

        A = B;
        B = tmp;
    }

    return A;
}

int LCM(int A, int B, int C) { // 최소 공배수 함수
    return (A * B) / C;
}

int main() {
    int N;
    cin >> N;

    for(int i = 0; i < N; ++i) {
        int A, B;
        cin >> A >> B;

        int C = GCD(A, B);
        int D = LCM(A, B, C);

        cout << D << endl;
    }

    return 0;
}