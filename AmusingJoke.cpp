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
	string x, y, z;
	cin >> x >> y >> z;
	string s1 = x + y;
	sort(s1.begin(), s1.end());
	sort(z.begin(), z.end());
	if (s1 == z) cout << "YES";
	else cout << "NO";

	return 0;
}