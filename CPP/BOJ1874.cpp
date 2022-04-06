#include <iostream>
#include <stack>
using namespace std;
 
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
    cout.tie(0);

    stack<int> stk;
 
	int N, num;
    cin >> N;
    int cnt = 1;
	string res = "";
 
	for(int i = 0; i < N; ++i) {
		cin >> num;

		if(num >= cnt) {
			while(num + 1 != cnt) {
				stk.push(cnt++);
				res += "+\n";
			}

			stk.pop();
			res += "-\n";
		} else {
			if(stk.top() == num) {
				stk.pop();
				res += "-\n";
			} else {
				res = "NO";
				break;
			}
		}
	}
	cout << res;
	return 0;
}