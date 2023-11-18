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
	int x, y;
	vector<vector<int>> v;
	v.reserve(n);
	while (n--) {
		cin >> x >> y;
		v.push_back({x, y});

	}
	int count = 0;
	for (int i = 0; i < v.size(); ++i)
	{
		for (int j = i + 1; j < v.size(); ++j) {
			if (v[i][0] == v[j][1] ) count++;
			if (v[i][1] == v[j][0]) count++;
		}
	}
	cout << count;
	return 0;
}