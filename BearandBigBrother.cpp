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
	int a, b;
	cin >> a >> b;
	int year = 0;
	while (a <= b) {
		year++;
		a *= 3;
		b *= 2;
	}
	cout << year;


	return 0;
}