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
	int year;
	cin >> year;
	string strYear;
	set<char> yearSet;
	while (1) {
		yearSet.clear();
		year++;
		strYear = to_string(year);
		for_each(strYear.begin(), strYear.end(), [&yearSet](char c) {
			yearSet.insert(c);
		});

		if (yearSet.size() == strYear.size()) break;
	}
	cout << year;


	return 0;
}