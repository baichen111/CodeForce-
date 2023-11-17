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
	string s;
	cin >> s;
	set<char> myset;
	for_each(s.begin(), s.end(), [&myset](char c) {myset.insert(tolower(c));});

	if (myset.size() == 26) cout << "YES";
	else cout << "NO" ;


	return 0;
}