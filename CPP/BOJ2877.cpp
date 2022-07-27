#include <iostream>
#include <vector>
using namespace std;

vector<int> v;

void FS(int A) {
	vector<int> vtr;

	while (A >= 1) {
		vtr.push_back(A % 2);
		A /= 2;
	}

	for (int i = vtr.size() - 1; i >= 0; --i) {
		v.push_back(vtr[i]);
	}
}

int main() {
	int N;
	cin >> N;

	FS(N + 1);

	for (int i = 1; i < v.size(); ++i) {
		if (v[i] == 0) cout << "4";
		else cout << "7";
	}
}