#include <iostream>
#include <queue>
using namespace std;

int N, M;
int cnt = 0;
int arr[101][101];
bool str[101] = {0};

queue<int> q;

void BFS(int z) {
    q.push(z);
    str[z] = true;

    while(!q.empty()) {
        z = q.front();
        q.pop();

        for(auto i = 1; i <= N; ++i) {
            if(arr[z][i] == 1 && str[i] == 0) {
                q.push(i);
                str[i] = true;
                cnt++;
            }
        }
    }
}

int main() {
    cin >> N >> M;

    for(int i = 0; i < M; ++i) {
        int A, B;
        cin >> A >> B;

        arr[A][B] = 1;
        arr[B][A] = 1;
    }

    BFS(1);

    cout << cnt;

    return 0;
}