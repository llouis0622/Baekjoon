#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int N, M;
vector<int> vtr;

int main() {
    cin >> N >> M;
    
    for(int i = 0; i < N; ++i) {
        int X;
        cin >> X;

        vtr.push_back(X);
    }

    int srt = 0;
    int end = *max_element(vtr.begin(), vtr.end());
    int res = 0;

    while(srt <= end) {
        long long int cnt = 0;
        int mid = (srt + end) / 2;
            
        for(int i = 0; i < N; ++i) {
            if(vtr[i] > mid) cnt += vtr[i] - mid;
        }

        if(cnt < M) end = mid -1;  
        else {
            res = mid;
            srt = mid +1;
        }
    }

    cout << res;
}