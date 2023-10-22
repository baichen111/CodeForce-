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
	int n;
	cin >> n;
	string mag{""};
	int groups{1};
	while (n--) {
		string prev{mag};
		cin >> mag;
		if (prev[1] == mag[0] && prev != "") groups++;
	}
	cout << groups;
	return 0;
}