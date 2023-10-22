#include<bits/stdc++.h>
#define int long long int
#define F first
#define S second
#define pb push_back
#define ONLINE_JUDGE

using namespace std;

int32_t main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	string s ;
	cin >> s;
	int cnt = count_if(s.begin(), s.end(), [](char c) {
		return c == '4' || c == '7';
	});

	if (cnt == 4 || cnt == 7 || cnt == 47) cout << "YES";
	else  cout << "NO";
	return 0;
}