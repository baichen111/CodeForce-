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
	int n, t;
	cin >> n >> t;
	string s;
	cin >> s;
	for (int i = 0; i < t; ++i)
	{
		int idx = 1;
		while (idx <= n) {
			if (s[idx - 1] == 'B' && s[idx] == 'G') {
				s[idx - 1] = 'G';
				s[idx] = 'B';
				idx += 2;
			} else idx++;
		}
	}
	cout << s;
	return 0;
}