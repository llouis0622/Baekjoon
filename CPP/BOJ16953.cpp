#include <iostream>
using namespace std;

int A, B;

int main() {
	cin >> A >> B;

	int cnt = 0;

	while(1) {
		if(A > B) {
			cout << -1 << endl;
			break;
		}

		if(A == B) {
			cout << cnt + 1 << endl;
			break;
		}

		if(B % 10 == 1) B /= 10;

		else if(B % 2 == 0) B /= 2;

		else {
			cout << -1 << endl;
			break;
		}

		cnt++;
	}

	return 0;
}