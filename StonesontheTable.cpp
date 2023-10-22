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
	int n ;
	cin >> n;

	string s;
	cin >> s;
	int cnt = 0;
	for (int i = 1; i < s.size(); ++i)
	{
		char prev = s[i - 1];
		char current = s[i];
		if (prev == current) cnt++;
	}
	cout << cnt;

	return 0;
}