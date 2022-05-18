#include <iostream>
#include <vector>
using namespace std;

int N;
int arr[100001];
bool bl[100001];

vector<int> v[100001];

void DFS(int X) {
    bl[X] = true;

    for (int i = 0; i < v[X].size(); ++i) {
        int nxt = v[X][i];

        if(!bl[nxt]) {
            arr[nxt] = X;

            DFS(nxt);
        }
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> N;

    for (int i = 0; i < N; ++i) {
        int A, B;
        cin >> A >> B;

        v[A].push_back(B);
        v[B].push_back(A);
    }

    DFS(1);

    for (int i = 2; i <= N; ++i) {
        cout << arr[i] << "\n";
    }

    return 0;
}