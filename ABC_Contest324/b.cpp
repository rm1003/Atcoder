#include <bits/stdc++.h>

using ll = long long;

int gcd (int a, int b) {
	return b==0 ? a : gcd(b,a%b);
}

int lcm (int a, int b) {
	return a/gcd(a,b)*b;
}



bool solve (ll n) {
	while (n % 2 == 0) {
		n /= 2;
	}
	while (n % 3 == 0) {
		n /= 3;
	}

	return n == 1;
}

int main () {
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	ll n;
	std::cin >> n;

	if (solve(n)) {
		std::cout << "Yes\n";
	} else {
		std::cout << "No\n";
	}

	return 0;
}

