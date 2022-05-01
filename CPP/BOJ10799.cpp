#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main() {
    string str;
    cin >> str;

	stack<char> s;
	
	int cnt = 0;

	for(int i = 0; i < str.length(); ++i) {
		if(str[i] == '(') s.push(str[i]);

		else if(str[i] == ')' && str[i - 1] == '(') {
			s.pop();
			cnt += s.size();
		}

		else {
			cnt++;
			s.pop();
		}
	}

	cout << cnt << endl;

    return 0;
}