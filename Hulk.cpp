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
	int x;
	cin >> x;
	string s{""};
	for (int i = 0; i < x; ++i)
	{
		if (i % 2) {
			s += "I love that ";
		} else s += "I hate that ";
	}
	int pos = s.rfind("that ");
	s.replace(pos, s.size() - 1, "it");
	cout << s << endl;
	return 0;
}