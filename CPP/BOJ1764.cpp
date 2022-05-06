#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
 
int main(void){
    int N, M;
    cin >> N >> M;
 
    vector<string> vtr;
    vector<string> arr;

    string str;

    vtr.resize(N);

    for(int i = 0; i < N; ++i) {
        cin >> vtr[i];
    }

    sort(vtr.begin(), vtr.end());

    for(int j = 0; j < M; ++j) {
        cin >> str;
 
        if(binary_search(vtr.begin(), vtr.end(), str)) arr.push_back(str);
    }

    sort(arr.begin(), arr.end());

    cout << (int)arr.size() << endl;

    for(int i = 0; i < arr.size(); ++i) {
        cout <<  arr[i].c_str() << endl;
    }
 
    return 0;
}