#include <bits/stdc++.h>

using ll = long long;

int gcd (int a, int b) {
	return b==0 ? a : gcd(b,a%b);
}

int lcm (int a, int b) {
	return a/gcd(a,b)*b;
}



void solve () {
	int n, m;
	std::cin >> n >> m;
	
	std::string s, t;
	std::cin >> s >> t;
	int x = s.length();
	if ((t.find(s) == 0) && (t.rfind(s) == t.length() - x))
		std::cout << 0 << '\n';
	else if (t.find(s) == 0)
		std::cout << 1 << '\n';
	else if (t.rfind(s) == t.length() - x)
		std::cout << 2 << '\n';
	else
		std::cout << 3 << '\n';
	
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

