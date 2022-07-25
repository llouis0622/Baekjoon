#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
	double x, y, c;
	cin >> x >> y >> c;

	double l = 0, r = min(x, y);

	while (r - l >= 1e-3) {
		double w = (l + r) / 2;
		double a = sqrt(pow(x, 2) - pow(w, 2));
		double b = sqrt(pow(y, 2) - pow(w, 2));
		double tmp = a * b / (a + b);

		if (tmp < c) r = w;
		else l = w;
	}
    
	cout << fixed;
	cout.precision(3);
	cout << r;
}