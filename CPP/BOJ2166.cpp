#include <iostream>
#include <cmath>
#include <vector>
#include<algorithm>
using namespace std;

int N, x, y;
double ans;

vector<pair<double, double>> v;

double CCW(int a, int b, int c) {
	double x1 = v[a].first;
	double x2 = v[b].first;
	double x3 = v[c].first;
	double y1 = v[a].second;
	double y2 = v[b].second;
	double y3 = v[c].second;
    double num1 = x1 * y2 + x2 * y3 + x3 * y1;
	double num2 = x2 * y1 + x3 * y2 + x1 * y3;
    double res = num1 - num2;
    
	return res / 2;
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
    cout << fixed;
    cout.precision(1);

	cin >> N;

	for(int i = 0; i < N; ++i) {
		cin >> x >> y;
		v.push_back({x, y});
	}

	for(int i = 1; i < N - 1; ++i) {
        ans += CCW(0, i, i + 1);
    }
    
    cout << abs(ans) << '\n';
}