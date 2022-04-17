#include <iostream>
using namespace std;

int N, M;
int arr[9] = {0};
bool bl[9] = {0};

void DFS(int x, int y) {
    if(y == M) {
        for(int i = 0; i < M; ++i) {
            cout << arr[i] << " ";
        }

        cout << endl;

        return;
    }

    for(int i = x; i <= N; ++i) {
        if(!bl[i]) {
            bl[i] = true;
            arr[y] = i;

            DFS(i + 1, y + 1);

            bl[i] = false;
        }
    }
}

int main() {
    cin >> N >> M;

    DFS(1, 0);
}