#include <iostream>
#include <string>
using namespace std;

int main() {
	string str;
    string arr = "";

	getline(cin, str);

	for (int i = 0; i < str.length(); i++) {
		if(str[i] == 'U' && arr.empty()) arr += 'U';
		else if(str[i] == 'C' && arr == "U") arr += 'C';
		else if(str[i] == 'P' && arr == "UC") arr += 'P';
		else if(str[i] == 'C' && arr == "UCP") arr += 'C';
	}

	if(arr == "UCPC") cout << "I love UCPC" << '\n';
	else cout << "I hate UCPC" << '\n';
    
	return 0;
}