#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n;
		cin >> n;
		vector<int> a(n);
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		int id = -1;
		int mx = INT_MIN;
		for (int i = 0; i < n; i++) {
			if (a[i] > mx) {
				mx = a[i];
				id = i;
			}
		}
		if (mx == 1) {
			cout << "YES" << '\n';
			continue;
		}
		bool checker = false;
		for (int i = 0; i < n; i++) {
			if (a[i] == mx && i != id) {
				checker = true;
			} else if (a[i] == mx - 1) {
				checker = true;
			}
			if (checker) {
				break;
			}
		}
		cout << (checker ? "YES" : "NO") << '\n';
	}
	return 0;
}
