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
	int t ;
	cin >> t;
	int ex, en;
	int num{0}, cap{0};
	while (t--) {
		cin >> ex >> en;
		num += en - ex;
		if (num > cap) cap = num;
	}
	cout << cap;
	return 0;
}