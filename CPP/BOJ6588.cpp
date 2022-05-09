#include <iostream>
using namespace std;

int arr[1000001] = {0};

void prime() {
    for(int i = 2; i * i <= 1000000; ++i) {
        if(arr[i] == 0) {
            for(int j = i * i; j <= 1000000; j += i) {
                arr[j] = 1;
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    prime();

    while(1) {
        cin >> N;

        if(N == 0) break;

        bool bl = false;

        for(int i = 3; i <= N; i += 2) {
            if(arr[i] == 0 && arr[N - i] == 0) {
                cout << N << " = " << i << " + " << N - i << "\n";

                bl = true;

                break;
            }
        }

        if(!bl) cout << "Goldbach's conjecture is wrong." << "\n";
    }

    return 0;
}