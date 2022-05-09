#include<iostream>
#include<string>
using namespace std;

int GCD(int a, int b) {
	if(a % b == 0) return b;

	return GCD(b, a % b);
}

int main() {
	string str;
	cin >> str;

	int a = 0, b = 0;
    int res = 1;

	bool bl = true;

	for(int i = str.length()-1; i >= 0; --i) {
		if(str[i] == ':') {
			res = 1;
			bl = false;
		}

		else {
			if(bl) {
				b += (str[i] - '0') * res;
				res *= 10;
			}

			else {
				a += (str[i] - '0') * res;
				res *= 10;
			}
		}
	}

	int num = GCD(a, b);

	cout << a / num << ":" << b / num << endl;

	return 0;
}