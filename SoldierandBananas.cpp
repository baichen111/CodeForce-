#include <bits/stdc++.h>
//#define int long long int
//#define ONLINE_JUDGE

using namespace std;

int32_t main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int k, n, w;
	cin >> k >> n >> w;
	int total = 0;
	for (int i = 1; i <= w; ++i)
	{
		total += i * k;
	}
	cout << max(total - n, 0);
	return 0;
}