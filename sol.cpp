#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n, k;
		cin >> n >> k;
		// divide the number of weapons by number of kid cyborgs to get the minimum
		cout << k / n << '\n';
	}
	return 0;	
}
