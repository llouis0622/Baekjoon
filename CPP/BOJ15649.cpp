#include <iostream>
using namespace std;

int N, M;
int arr[9] = {0};
bool str[9] = {0};

void DFS(int num) {
    if(num == M) {
        for(int i = 0; i < M; ++i) {
            cout << arr[i] << ' ';
        }
        cout << '\n';

        return;
    }

    for(int i = 1; i <= N; ++i) {
        if(!str[i]) {
            str[i] = true;
            arr[num] = i;

            DFS(num + 1);

            str[i] = false;
        }
    }
}

int main() {
    cin >> N >> M;
    DFS(0);
}