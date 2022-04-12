#include <iostream>
using namespace std;

int main() {
    long long N;
    cin >> N;

    long long sum = 0;
    long long cnt = 0;
    long long num = 1;

    while(1) {
        sum += num;
        cnt++;

        if(sum > N) {
            cnt--;
            break;
        }

        num++;
    }

    cout << cnt;

    return 0;
}