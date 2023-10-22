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
	char x;
	string s;
	while (cin >> x) {
		if (isdigit(x)) {
			s += x;
		}
	}
	sort(s.begin(), s.end());
	for (int i = 0; i < s.size(); ++i)
	{
		if (i != s.size() - 1) cout << s[i] << '+';
		else cout << s[i];
	}

	return 0;
}