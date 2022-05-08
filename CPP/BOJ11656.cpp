#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    string str;
    cin >> str;

    vector<string> vtr;

    for(int i = 0; i < str.size(); ++i) {
        vtr.push_back(str.substr(i, str.size()));
    }

    sort(vtr.begin(), vtr.end());

    for(auto i : vtr) {
        cout << i << "\n";
    }

    return 0;
}