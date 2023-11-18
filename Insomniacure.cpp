#include <bits/stdc++.h>
#define int long long int
//#define ONLINE_JUDGE

using namespace std;

int32_t main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int k, l, m, n;
	cin >> k >> l >> m >> n;
	int d;
	cin >> d;

	int count = 0;
	for (int i = 1; i <= d; i++) {
		if (i % k && i % l && i % m && i % n) {

			count++;
		}
	}
	cout << (d - count);

	return 0;
}