#include <iostream>
#include <vector>
#include <queue>
using namespace std;

const int INF = 1e9 + 10;

vector<pair<int, int>> vtr[20001];

int str[20001];
int V, E, A;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> V >> E >> A;

    fill(str, str + V + 1, INF);

    while(E--) {
        int u, v, w;
        cin >> u >> v >> w;

        vtr[u].push_back({w, v});
    }

    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

    str[A] = 0;

    pq.push({str[A], A});

    while(!pq.empty()) {
        auto i = pq.top();

        pq.pop();

        if(str[i.second] != i.first) continue;

        for(auto j : vtr[i.second]) {
            if(str[j.second] <= str[i.second] + j.first) continue;

            str[j.second] = str[i.second] + j.first;

            pq.push({str[j.second], j.second});
        }
    }

    for(int i = 1; i <= V; ++i) {
        if(str[i] == INF) cout << "INF" << endl;
        else cout << str[i] << endl;
    }

    return 0;
}