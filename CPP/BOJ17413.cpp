#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
	stack<char> s;

	int idx = 0;

    string str;
	getline(cin, str);

	while(str[idx] != '\0') {
		if(str[idx] == '<') {
			while (!s.empty()) {
				cout << s.top();

				s.pop();
			}

			while(1) {
				cout << str[idx];

				if (str[idx] == '>') break;

				idx++;
			}
		}

		else if (isalnum(str[idx])) s.push(str[idx]);

		else {
			while(!s.empty()) {
				cout << s.top();

				s.pop();
			}

			cout << " ";
		}

		idx++;
	}

	while(!s.empty()) {
		cout << s.top();

		s.pop();
	}

    return 0;
}