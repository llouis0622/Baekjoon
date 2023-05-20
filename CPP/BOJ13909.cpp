#include<bits/stdc++.h>
using namespace std;

int main() {
    int N, num = 0;
    cin >> N;
    
    for (int i = 1; i * i <= N; ++i)
        num++;
    
    cout << num;
    return 0;
}