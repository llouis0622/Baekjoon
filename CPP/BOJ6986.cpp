#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main() {
	int N, K;
    cin >> N >> K;

	vector<ll> v;
	
	v.resize(N);

	for (int i = 0; i < N; i++) {
		double num;
		cin >> num;

		v[i] = (ll)(num * 1000);
	}

	sort(v.begin(), v.end());

	ll s = 0;

	for (int i = K; i + K < v.size(); i++) s += v[i];

	ll ans = s / (v.size() - K - K) + 5;

	printf("%lld.%02lld\n", ans / 1000, ans % 1000 / 10);

	s = 0;
	s += K * v[K];

	for (int i = K; i + K < v.size(); i++) s += v[i];

	s += K * v[v.size() - 1 - K];
	ans = s / v.size() + 5;

	printf("%lld.%02lld\n", ans / 1000, ans % 1000 / 10);
}