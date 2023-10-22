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
	int x;
	string s{"EASY"};

	while (cin >> x) {
		if (x) {
			s = "HARD";
			break;
		}
	}
	cout << s;
	return 0;
}