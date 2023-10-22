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
	int x, cnt = 0;
	for (int i = 0; i < 5; ++i)
	{
		for (int j = 0; j < 5; ++j)
		{
			cin >> x;
			//cout << x << " ";
			if (x == 1) {
				cnt += abs(j - 2) + abs(i - 2);
			}
		}
	}
	cout << cnt;

	return 0;
}