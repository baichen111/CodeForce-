#include<bits/stdc++.h>
#define int long long int
#define F first
#define S second
#define pb push_back
//#define ONLINE_JUDGE

using namespace std;

bool solve() {
	int x , y , z;
	cin >> x >> y >> z;
	if ((x == 1 && y == 1) || (x == 1 && z == 1) || (y == 1 && z == 1)) return true;
	return false;
}

int32_t main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int t ;
	cin >> t;
	int cnt = 0;
	while (t--) {
		if (solve()) cnt++;
	}
	cout << cnt;

	return 0;
}