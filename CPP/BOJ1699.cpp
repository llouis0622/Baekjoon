#include <iostream>
#include <algorithm>
using namespace std;

int arr[100001];
 
int main() {
    int N;
    cin >> N;
    
    for(int i = 1; i <= N; ++i) {
        arr[i] = i;
    }
    
    for(int i = 2; i <= N; ++i) {
        for(int j = 2; j * j <= i; ++j) {
            arr[i] = min(arr[i], arr[i - j * j] + 1);
        }
    }
            
    cout << arr[N] << endl;
}