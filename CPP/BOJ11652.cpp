#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<long long> v;

    for(int i = 0; i < N; ++i) {
        long long num;
        cin >> num;

        v.push_back(num);
    }

    sort(v.begin(), v.end());

    long long arr = v[0];

    int cnt = 0;
    int max = 0;

    for(int i = 1; i < N; ++i) {
        if(v[i] == v[i - 1]) cnt++;
        else cnt = 0;

        if(cnt > max) {
            max = cnt;
            arr = v[i];
        }
    }

    cout << arr << endl;

    return 0;
}