#include<iostream>
using namespace std;

int main() {
    int N, A, B;
    int cnt = 0;

    cin >> N >> A >> B;

    while(A != B) {
        A = A - A / 2;
        B = B - B / 2;
        cnt++;
    }
    
    cout << cnt;

    return 0;
}