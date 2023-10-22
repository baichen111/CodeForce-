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
	int n;
	cin >> n;
	stack<int> s;
	s.push(1);
	s.push(2);
	s.push(3);
	s.push(4);
	s.push(5);
	int cnt = 0;
	while (n) {
		if (s.top() > n) {
			s.pop();
			continue;
		}
		cnt += n / s.top();
		n %= s.top();
		s.pop();

	}
	cout << cnt;

	return 0;
}