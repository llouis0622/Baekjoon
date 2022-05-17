#include<iostream>
#include<string>
#include<map>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
    cout.tie(0);

    int N, M;
    cin >> N >> M;

    string str;
    map<string, bool> m;

	int cnt = 0;

	for (int i = 0; i < N; ++i) {
		cin >> str;

		m[str] = true;
	}

	for (int i = 0; i < M; ++i) {
		cin >> str;

		if (m[str]) cnt++;
	}

	cout << cnt << "\n";

    return 0;
}