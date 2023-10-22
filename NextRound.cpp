#include<bits/stdc++.h>
#define int long long int
#define F first
#define S second
#define pb push_back
#define ONLINE_JUDGE

using namespace std;

void solve() {}

template<typename T>
void printVec(std::vector<T> vec) {
	for (const T& v : vec) {
		cout << v << " ";
	}
}

int32_t main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n , k;
	cin >> n >> k;
	int cnt = 0;
	int x, score = 0;
	while (cin >> x ) {
		if (x == 0) break;
		if (x < score) break;
		cnt++;

		if (cnt == k) {
			score = x;
		}
	}

	cout << cnt << endl;
	return 0;
}