#include <bits/stdc++.h>
using namespace std;

queue<int> q;
int main() {
    int N;
    cin >> N;
    
    queue<int> q;
    
    for (int i = 1; i <= N; ++i)
        q.push(i);
    
    while (q.size() != 1) {
        cout << q.front() << ' ';
        
        q.pop();
        q.push(q.front());
        q.pop();
    }
    
    cout << q.front();
    
    return 0;
}