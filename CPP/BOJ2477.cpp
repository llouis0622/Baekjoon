#include <iostream>
using namespace std;

int main() {
    int X[6], Y[6];
    int K = 0, N = 0;
    int sum = 0, max = 0;
    
    cin >> N;
    
    for(int i = 0; i < 6; ++i) {
        cin >> X[i] >> Y[i];
    }
    
    for(int i = 0; i < 6; ++i) {
        if(max < Y[i] * Y[(i + 1) % 6]) {
            max = Y[i] * Y[(i + 1) % 6];
            K = i;
        }
    }
    
    sum = Y[(K + 3) % 6] * Y[(K + 4) % 6];
    max = max - sum;
    
    cout << max * N;
}