#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, A, B;
    cin >> N;
    
    vector<pair<int, int>> v;
    priority_queue<int, vector<int>, greater<int>> pq;
    
    for (int i = 0; i < N; ++i) {
        cin >> A >> B;
        v.push_back(make_pair(A, B));
    }
    
    sort(v.begin(), v.end());
    
    pq.push(v[0].second);
    
    for (int i = 1; i < N; ++i) {
        if (pq.top() <= v[i].first) {
            pq.pop();
            pq.push(v[i].second);
        } else pq.push(v[i].second);
    }
    
    cout << pq.size();
    return 0;
}