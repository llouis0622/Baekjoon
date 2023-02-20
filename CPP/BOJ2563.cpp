#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, X, Y, cnt = 0;
    cin >> N;
    
    int arr[100][100] = {0, 0};
    
    for(int i = 0; i < N; ++i) {
        cin >> X >> Y;
        
        for(int j = Y; j < Y + 10; ++j) {
            for(int k = X; k < X + 10; ++k) {
                if(!arr[j][k]) {
                    cnt++;
                    arr[j][k] = 1;
                }
            }
        }
    }
    
    cout << cnt << endl;
    
    return 0;
}
