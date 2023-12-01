#include <bits/stdc++.h>

using ll = long long;

int gcd (int a, int b) {
	return b==0 ? a : gcd(b,a%b);
}

int lcm (int a, int b) {
	return a/gcd(a,b)*b;
}

void solve () {
    int x, y;
    std::cin >> x >> y;

    if ((x - y) <= 3 && x - y > 0) {
        std::cout << "Yes\n";
    } else if ( y - x <= 2 && y - x > 0) {
        std::cout << "Yes\n";
    } else {   
        std::cout << "No\n";
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
