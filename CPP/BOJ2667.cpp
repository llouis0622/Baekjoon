#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

int N, cnt = 0;
int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};

string arr[26];

bool visited[26][26] = {0};

vector<int> vtr;
queue<pair<int, int>> q;

void BFS(int x,int y) {
    q.push({x, y});
    visited[x][y] = true;
    cnt++;

    while(!q.empty()) {
        int A = q.front().first;
        int B = q.front().second;

        q.pop();
        
        for(int i = 0; i < 4; ++i) {
            int X = A + dx[i];
            int Y = B + dy[i];

            if(0 <= X && 0 <= Y && X < N && Y < N && visited[X][Y] == false && arr[X][Y] == '1') {
                q.push({X, Y});
                visited[X][Y] = true;
                cnt++;
            }
        }
    }
}

int main() {
    cin >> N;

    for(int i = 0; i < N; ++i) {
        cin >>arr[i];
    }

    for(int i = 0; i < N; ++i) {
        for(int j = 0; j < N; ++j) {
            if(arr[i][j] == '1' && visited[i][j] == false) {
                cnt = 0;

                BFS(i, j);

                vtr.push_back(cnt);
            }
        }
    }

    sort(vtr.begin(), vtr.end());

    cout << vtr.size() << endl;

    for(int i = 0; i < vtr.size(); ++i) {
        cout << vtr[i] << endl;
    }

    return 0;
}