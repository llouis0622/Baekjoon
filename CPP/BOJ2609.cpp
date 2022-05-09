#include <iostream>
using namespace std;

// 재귀로 푸는 순간 시간초과 발생
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
    // 시간초과 발생 때문에 다음 문장 삽입 필수
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int A, B;
    cin >> A >> B;

    int C = GCD(A, B);
    int D = LCM(A, B, C);

    cout << C << "\n" << D;
    // 시간초과 때문에 endl을 사용하지 않고 "\n" 개행문자 사용

    return 0;
}