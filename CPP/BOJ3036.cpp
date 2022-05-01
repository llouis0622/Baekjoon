#include <iostream>
using namespace std;

int arr[101];

int GCD(int A, int B) {
	return A % B ? GCD(B, A % B) : B;
}

int main() {
	int N;
	cin >> N;

	for(int i = 0; i < N; ++i) {
        cin >> arr[i];
    }

	for(int i = 1; i < N; ++i) {
		int num = GCD(arr[0], arr[i]);

		cout << arr[0] / num << "/" << arr[i] / num << endl;
	}

    return 0;
}