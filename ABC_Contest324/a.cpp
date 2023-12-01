#include <bits/stdc++.h>

using ll = long long;

int gcd (int a, int b) {
	return b==0 ? a : gcd(b,a%b);
}

int lcm (int a, int b) {
	return a/gcd(a,b)*b;
}

int main () {
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int t, n, aux;
	bool ans = true;
	std::cin >> t >> n;
	aux = n;
	for (int i = 0; i < t - 1; i++) {
		std::cin >> n;
		if (!(aux == n)) {
			ans = false;
		}
	}
	if (ans)
		std::cout << "Yes\n";
	else
		std::cout << "No\n";

	return 0;
}

