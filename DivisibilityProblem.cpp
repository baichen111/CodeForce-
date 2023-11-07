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
	std::vector<char> v;
	v.reserve(n);

	int x;
	while (cin >> x) v.push_back(x);

	int max_x = *max_element(v.begin(), v.end());
	int min_x = *min_element(v.begin(), v.end());
	//cout << "max x: " << max_x << " min x: " << min_x << endl;
	auto it = find(v.rbegin(), v.rend(), min_x);

	int min_pos;
	if (it != v.rend()) {
		min_pos = std::distance(it, v.rend()) - 1;
	}

	int max_pos;
	auto iT = find(v.begin(), v.end(), max_x);
	if (iT != v.end()) {
		max_pos = std::distance( v.begin(), iT) ;
	}

	//cout << "max pos: " << max_pos << " min pos: " << min_pos << endl;
	if (v[max_pos] == v[0] && v[min_pos] == v[n - 1])cout << 0;
	else {
		if (max_pos < min_pos) {
			cout << (max_pos + n - min_pos - 1);
		} else {
			cout << (n - 1 - min_pos + max_pos - 1);
		}
	}


	return 0;
}