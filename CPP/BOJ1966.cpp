#include <iostream>
#include <queue>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T;
    cin >> T;

    for(int i = 0; i < T; ++i) {
        int N, M;
        cin >> N >> M;

        int cnt = 0;

        queue<pair<int, int>> q;
        priority_queue<int> importance;

        for(int j = 0; j < N; ++j) {
            int num;
            cin >> num;

            q.push(make_pair(j, num));
            importance.push(num);
        }

        while(!q.empty()) {
            int idx = q.front().first;
            int rank = q.front().second;
            
            if(importance.top() > rank) {
                q.push(q.front());
                q.pop();
            } else {
                q.pop();
                importance.pop();
                cnt++;

                if(idx == M) {
                    cout << cnt << endl;
                    break;
                }
            }
        }
    }
}