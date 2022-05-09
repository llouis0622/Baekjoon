#include <iostream>
#include <deque>
using namespace std;

int main() {
    deque<int> dq;

    int N, M, cnt = 0;
    cin >> N >> M;

    for(int i = 1; i <= N; ++i) {
        dq.push_back(i);
    }

    while(M--) {
        int num, idx;
        cin >> num;

        for(int i = 0; i < N; ++i) {
            if(dq[i] == num) {
                idx = i;
                break;
            }
        }

        if(idx < dq.size() / 2 + 1) {
            for(int i = 0; i < dq.size(); ++i) {
                if(dq.front() == num) {
                    dq.pop_front();
                    break;
                }

                dq.push_back(dq.front());
                dq.pop_front();
                cnt++;
            }
        }

        else {
            for(int i = 0; i < dq.size(); ++i) {
                if(dq.front() == num) {
                    dq.pop_front();
                    break;
                }

                dq.push_front(dq.back());
                dq.pop_back();
                cnt++;
            }
        }
    }

    cout << cnt;

    return 0;
}