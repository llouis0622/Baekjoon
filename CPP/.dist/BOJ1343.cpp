#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main() {
	string str, arr;
    cin >> str;

	str += ' ';

    int cnt = 0;

	for(int i = 0; i < str.size() - 1; ++i) {
        if(str[i] == 'X') cnt++;
        
        if(str[i] == '.') {
			arr += ".";

			if (cnt % 2 != 0) break;

			else cnt = 0;
		}
		else if(cnt == 2 && str[i + 1] != 'X') {
			arr += "BB";
			cnt = 0;
		}
		else if (cnt == 4) {
			arr += "AAAA";
			cnt = 0;
		}
	}

	if (cnt % 2 == 1) cout << -1;
	else cout << arr;

    return 0;
}