#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int N, M, num;
int arr[9] = {0};
bool visited[9] = {0};

vector<int> vtr;

void DFS(int[] vtr) {
    if(vtr.size() == M) {
        for(int i = 0; i < M; ++i) {
            cout << vtr[i] << " ";
        }

        cout << "\n";

        return;
    }

    for(int i = 1; i <= N; ++i) {
        visited[i] = true;

        arr[vtr.size()] = i;

        DFS(vtr.size() + 1);

        visited[i] = false;
    }
}

int main() {
    cin >> N >> M;

    for(int i = 0; i < N; ++i) {
        cin >> num;

        vtr.push_back(num);
    }

    sort(vtr.begin(), vtr.end());

    DFS(vtr.size());
}