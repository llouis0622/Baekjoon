#include <iostream>
#include <vector>
using namespace std;

int M, N;
bool bl[1001];

vector<int> v[1001];

void DFS(int a) {
    bl[a] = true;
    
    for(int i = 0; i < v[a].size(); ++i) {
        int num = v[a][i];
        
        if(!bl[num]) DFS(num);
    }
}

int main() {
    cin >> N >> M;
    
    for(int i = 0; i < M; ++i) {
        int X, Y;
        
        cin >> X >> Y;
        
        v[X].push_back(Y);
        v[Y].push_back(X);
    }
    
    int cnt = 0;
    
    for(int i = 1; i <= N; ++i) {
        if(!bl[i]) {
            DFS(i);
            
            cnt++;
        }
    }
    
    cout << cnt << endl;
    
    return 0;
}