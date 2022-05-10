#include <iostream>
#include <queue>
using namespace std;

int main() {
    int N;
    cin >> N;

    queue<int> q;

    while(N--) {
        string str;
        cin >> str;

        if(str == "push") {
            int num;
            cin >> num;

            q.push(num);
        }

        else if(str == "pop") {
            if(!q.empty()) {
                cout << q.front() << endl;

                q.pop();
            }

            else cout << -1 << endl;
        }

        else if(str == "size") {
            cout << q.size() << endl;
        }

        else if(str == "empty") {
            cout << q.empty() << endl;
        }

        else if(str == "front") {
            if(!q.empty()) cout << q.front() << endl;

            else cout << -1 << endl;
        }

        else if(str == "back") {
            if(!q.empty()) cout << q.back() << endl;
            
            else cout << -1 << endl;
        }
    }
}