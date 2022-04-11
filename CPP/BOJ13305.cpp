#include <iostream>
using namespace std;

long long vtr[100001];
long long arr[100001];
long long N;
long long sum = 0;
long long num;

int main() {
    cin >> N;
    
    for(int i = 0; i < N - 1; ++i) {
        cin >> vtr[i];
    }

    for(int i = 0; i < N; ++i) {
        cin >> arr[i];
    }

    num = 1000000000;

    for(int i = 0; i < N - 1; ++i) {
        if(arr[i] < num) num = arr[i];

        sum += num * vtr[i];
    }

    cout << sum;

    return 0;
}