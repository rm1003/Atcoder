#include <bits/stdc++.h>

using ll = long long;

int gcd (int a, int b) {
	return b==0 ? a : gcd(b,a%b);
}

int lcm (int a, int b) {
	return a/gcd(a,b)*b;
}



void solve () {
	int n, i;
	bool ans = false;

	std::cin >> n;
	std::vector<char> s(n);
	for (i = 0; i < n; i++) {
		std::cin >> s[i];
	}

	for (i = 0; i < n - 2; i++) {
		if (s[i] == 'A' && s[i + 1] == 'B' && s[i + 2] == 'C') {
			ans = true;
			break;
		}
	}
	if (ans == true) {
		std::cout << i + 1 << '\n';
	} else {
		std::cout << -1 << '\n';
	}	
}

int main () {
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int t = 1;

	while (t--) {
		solve();
	}

	return 0;
}

