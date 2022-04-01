#include <iostream>
using namespace std;

int main() {
	int N, T, X, Y;
	int A, B;
    int R, X1, Y1, X2, Y2;

	cin >> T;

    for(int i = 0; i < T; ++i) {
        cin >> X1 >> Y1 >> X2 >> Y2 >> N;
        A = 0;
        B = 0;

        for(int j = 0; j < N; ++j) {
            cin >> X >> Y >> R;

            if((X - X1) * (X - X1) + (Y - Y1) * (Y - Y1) < R * R) {
                if((X - X2) * (X - X2) + (Y - Y2) * (Y - Y2) > R * R) B++;
            } else if ((X - X1) * (X - X1) + (Y - Y1) * (Y - Y1) > R * R) {
                if((X - X2) * (X - X2) + (Y - Y2) * (Y - Y2) < R * R) A++;
            }
        }

        cout << A + B << endl;
    }
}