#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cin >> N;
    
    vector<int> v;
    
    for(int i = 0; i < N; ++i) {
        int num;
        cin >> num;
        
        v.push_back(num);
    }
    
    int X;
    cin >> X;
    
    sort(v.begin(), v.end());

    int start = 0;
    int end = N - 1;
    int cnt = 0;
    
    while(start < end) {
        if(v[start] + v[end] == X) {
            cnt++;
            start++;
            end--;
        }

        else if(v[start + v[end] < X]) start++;

        else cnt--;
    }
    
    cout << cnt;

    return 0;
}