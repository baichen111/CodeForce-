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
	int t;
	cin >> t;
	int x, y;
	while (t--) {
		cin >> x >> y;

		if (x <= y) {
			cout << (y - x) << endl;
			continue;
		}

		if (x % y == 0 ) {
			cout << 0 << endl;
			continue;
		};

		int res = x % y;
		cout << y - res << endl;

	}
	return 0;
}