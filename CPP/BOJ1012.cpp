#include <iostream>
#include <queue>
using namespace std;

int M, N, K;
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

int arr[51][51] = {0};
int visited[51][51] = {0};

queue<pair<int, int>> q;

void BFS(int x, int y) {
    q.push({x, y});

    while(!q.empty()) {
        int A = q.front().first;
        int B = q.front().second;

        q.pop();

        visited[A][B] = true;

        for(int i = 0; i < 4; ++i) {
            int X = A + dx[i];
            int Y = B + dy[i];

            if(0 <= X && 0 <= Y && X < N && Y < M && !visited[X][Y] && arr[X][Y] == 1) {
                q.push({X, Y});

                visited[X][Y] = true;
            }
        }
    }
}

void RE() {
    while(!q.empty()) {
        q.pop();
    }
        
    for(int i = 0; i < N; ++i) {
        for(int j = 0; j < M; ++j) {
            visited[i][j] = false;

            arr[i][j] = 0;
        }
    }
}

int main() {
    int T;
    cin >> T;

    for(int t = 0; t < T; ++t) {
        RE();

        cin >> M >> N >> K;

        int cnt = 0;

        for(int i = 0; i < K; ++i) {
            int x, y;
            cin >> y >> x;

            arr[x][y] = 1;
        }

        for(int i = 0; i < N; ++i) {
            for(int j = 0; j < M; ++j) {
                if(arr[i][j] == 1 && !visited[i][j]) {
                    BFS(i, j);

                    cnt++;
                }
            }
        }

        cout << cnt << endl;
    }

    return 0;
}