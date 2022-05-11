#include <iostream>
using namespace std;

int N, M;
int arr[8] = {0};
bool visited[8] = {0};

void DFS(int cnt) {
    if(cnt == M) {
        for(int i = 0; i < M; ++i) {
            cout << arr[i] << " "; // 배열 형태로 제작하여 출력
        }

        cout << "\n";

        return;
    }

    for(int i = 1; i <= N; ++i) {
        visited[i] = true; // 노드 연결 확인

        arr[cnt] = i; // 배열에 숫자 넣기

        DFS(cnt + 1); // 탐색 재진행

        visited[i] = false; // 노드 연결 해제
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N >> M;
    
    DFS(0); // DFS 시작

    return 0;
}