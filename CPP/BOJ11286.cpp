#include <iostream>
#include <vector>
#include <queue>
#include <functional>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int N;
    cin >> N;

    priority_queue<int, vector<int>, greater<int>> pq1;
    priority_queue<int> pq2;
    
    for(int i = 0; i < N; ++i) {
        int num;
        cin >> num;

        if(num == 0) {
            if (pq1.empty() && pq2.empty()) cout << 0 << "\n";
            
            else {
                if(pq1.empty()) {
                    cout << pq2.top() << "\n";

                    pq2.pop();
                }

                else if (pq2.empty()) {
                    cout << pq1.top() << "\n";

                    pq1.pop();
                }

                else {
                    if(pq1.top() < -pq2.top()) {
                        cout << pq1.top() << "\n";

                        pq1.pop();
                    }

                    else {
                        cout << pq2.top() << "\n";

                        pq2.pop();
                    }
                }
            }
        }

        else if(num > 0) pq1.push(num);

        else pq2.push(num);
    }
    
    return 0;
}