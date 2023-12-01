#include <bits/stdc++.h>

using ll = long long;

int gcd (int a, int b) {
	return b==0 ? a : gcd(b,a%b);
}

int lcm (int a, int b) {
	return a/gcd(a,b)*b;
}

void solve () {
    ll n;
    
    std::cin >> n;
    
    bool test = true;

    for (int j = 0; j < 8; j++) {
        if (!(n % 10 == 0)) {
            test = false;
            break;
        }
        n /= 100;
    }

    if (test)
        std::cout << "Yes\n";
    else
        std::cout << "No\n";
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

