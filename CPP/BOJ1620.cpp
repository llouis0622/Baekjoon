#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    map<string, int> m;

    vector<string> v;
    vector<string> vtr;

    int N, M;
    cin >> N >> M;

    string str;
    
    for (int i = 1; i <= N; ++i) {
        cin >> str;

        v.push_back(str);
        m.insert(make_pair(str, i));
    }

    for (int i = 0; i < M; ++i) {
        cin >> str;

        if(str[0] >= 65 && str[0] <= 90) vtr.push_back(to_string(m[str]));
        else vtr.push_back(v[stoi(str) - 1]);
    }

    for (int i = 0; i < vtr.size(); ++i) {
        cout << vtr[i] << "\n";
    }

    return 0;
}