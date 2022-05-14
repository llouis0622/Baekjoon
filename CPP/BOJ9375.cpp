#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main() {
    int T;
	cin >> T;

	while (T--) {
        int N;
		cin >> N;

        int ans = 1;

        vector<pair<string, int>> v;

        string str, arr;

		for(int i = 0; i < N; ++i) {
			cin >> str >> arr;

			if(v.size() == 0) {
				v.push_back(pair(arr, 1));

				continue;
			}

			for(int j = 0; j < v.size(); ++j) {
				if(arr == v[j].first) {
					v[j].second++;

					break;
				}

				if(j == v.size() - 1) v.push_back(pair(arr, 0));			
			}
		}	

		for(int i = 0; i < v.size(); ++i) {
            ans *= (v[i].second + 1);
        }

		cout << ans - 1 << endl;
	}
}