#include <bits/stdc++.h>
#define int long long int
#define ONLINE_JUDGE

using namespace std;

int32_t main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n;
	cin >> n;
	int p, q, counter = 0;
	while (n--) {
		cin >> p >> q;
		if (q - p >= 2) counter++;
	}
	cout << counter;
	return 0;
}