#include <bits/stdc++.h>

using ll = long long;

int gcd (int a, int b) {
	return b==0 ? a : gcd(b,a%b);
}

int lcm (int a, int b) {
	return a/gcd(a,b)*b;
}



bool solve (ll n) {
    int m = 3;
    int x, y;
    x = y = 0;
    while (m--) {
        if (n == 5) {
            x++;
        } else if (n == 7) {
            y++;
        }
        std::cin >> n;
    }
    if (x == 2 && y == 1)
	    return 1;
    return 0;
}

int main () {
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	ll n;
	std::cin >> n;

	if (solve(n)) {
		std::cout << "YES\n";
	} else {
		std::cout << "NO\n";
	}

	return 0;
}
