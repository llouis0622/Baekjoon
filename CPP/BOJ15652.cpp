#include <iostream>
using namespace std;

int N, M;
int arr[8] = {0};
bool visited[8] = {0};

void DFS(int num, int cnt) {
    if(cnt == M) {
        for(int i = 0; i < M; ++i) {
            cout << arr[i] << " ";
        }

        cout << "\n";

        return;
    }

    for(int i = num; i <= N; ++i) {
        visited[i] = true;

        arr[cnt] = i;

        DFS(i, cnt + 1);

        visited[i] = false;
    }
}

int main() {
    cin >> N >> M;

    DFS(1, 0);
}