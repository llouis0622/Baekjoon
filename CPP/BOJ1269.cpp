#include <iostream>
#include <map>
using namespace std;

int num;
int main() {
    int N, M;
	cin >> N >> M;

    map<int, bool> m;

	for (int i = 0; i < N + M; ++i) {
        int num;
		cin >> num;

		if (m[num] == true) m.erase(num);
		else m[num] = true;
	}

	cout << m.size();

    return 0;
}