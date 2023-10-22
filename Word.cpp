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
	string x;
	cin >> x;
	int low{0}, upp{0};
	for_each(x.begin(), x.end(), [&low, &upp](char c) {
		if (islower(c)) low++;
		else upp++;
	});
	if (low >= upp) {
		transform(x.begin(), x.end(), x.begin(), ::tolower);
	} else {
		transform(x.begin(), x.end(), x.begin(), ::toupper);
	}
	cout << x;
	return 0;
}