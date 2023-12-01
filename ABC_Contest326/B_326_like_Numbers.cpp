#include <bits/stdc++.h>

using ll = long long;

int gcd (int a, int b) {
	return b==0 ? a : gcd(b,a%b);
}

int lcm (int a, int b) {
	return a/gcd(a,b)*b;
}

void solve () {
    int n, aux;
    bool ans = false;
    std::cin >> n;

    while (!ans && n < 920) {
        aux = n % 100;
        if ((n / 100) * (aux / 10) == (n % 10)) {
            ans = true;
        }
        n++;
    }

    std::cout << n - 1 << "\n";
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
