#include<bits/stdc++.h>
#define int long long int
#define F first
#define S second
#define pb push_back
//#define ONLINE_JUDGE
using namespace std;

int32_t main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n;
	cin >> n;
	double x, p = 0.0;
	while (cin >> x) {
		p += x;
	}
	cout << (p / n);
	return 0;
}
