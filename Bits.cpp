#include<bits/stdc++.h>
#define int long long int
#define F first
#define S second
#define pb push_back
#define ONLINE_JUDGE

using namespace std;

void solve(int& X) {
	char x, y, z;
	cin >> x >> y >> z;
	if ((x == '+') || (z == '+')) X++;
	else if ((x == '-') || (z == '-')) X--;
}

int32_t main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int t ;
	cin >> t;
	int X = 0;
	while (t--) {
		solve(X);
	}
	cout << X;

	return 0;
}