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
	int n ;
	cin >> n;
	string s;
	cin >> s;
	int A{0}, D{0} ;
	for_each(s.begin(), s.end(), [&A, &D](char c) {
		if (c == 'A') A++;
		else D++;
	});
	if (A > D) cout << "Anton";
	else if (A < D) cout << "Danik";
	else cout << "Friendship";

	return 0;
}