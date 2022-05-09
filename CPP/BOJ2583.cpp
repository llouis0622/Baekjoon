#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};
int M, N, K, cnt = 0;
int arr[101][101];

bool visited[101][101];

vector<int> vtr;

void DFS(int x, int y) {
    int X, Y;

    visited[x][y] = true;
    cnt++;

    for(int i = 0; i < 4; ++i) {
        X = x + dx[i];
        Y = y + dy[i];

        if(X >= 0 && Y >= 0 && X < M && Y < N && !visited[X][Y]) DFS(X, Y);
    }
}

int main() {
    cin >> M >> N >> K;

    for(int i = 0; i < K; ++i) {
        int x1, x2, y1, y2;
        cin >> x1 >> y1 >> x2 >> y2;

        for(int j = y1; j < y2; ++j) {
            for(int k = x1; k < x2; ++k) {
                arr[j][k] = 1;
                visited[j][k] = true;
            }
        }
    }

    for(int i = 0; i < M; ++i) {
        for(int j = 0; j < N; ++j) {
            if(arr[i][j] == 0 && visited[i][j] == false) {
                cnt = 0;

                DFS(i, j);

                vtr.push_back(cnt);
            }
        }
    }

    sort(vtr.begin(), vtr.end());

    int size = vtr.size();

    cout << vtr.size() << endl;

    for(int i = 0; i < size; ++i) {
        cout << vtr[i] << " ";
    }

    return 0;
}