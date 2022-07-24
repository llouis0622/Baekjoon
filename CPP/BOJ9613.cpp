#include<iostream>
using namespace std;
 
int GCD(int A, int B) {
    if (A % B == 0) return B;
    else return GCD(B, A % B);
}
 
int main() {
    int T, N;
    cin >> T;

    long long arr[101] = {0};
    long long sum[101] = {0};

 
    for (int i = 0; i < T; ++i) {
        cin >> N;

        for (int j = 0; j < N; ++j) {
            cin >> arr[j];
        }

        for (int k = 0; k < N; ++k) {
            for (int p = k + 1; p < N; ++p) {
                sum[i] += GCD(arr[k], arr[p]);
            }
        }
    }
 
    for (int i = 0; i < T; ++i) {
        cout << sum[i] << endl;
    }
}