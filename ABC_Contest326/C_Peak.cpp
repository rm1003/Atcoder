#include <bits/stdc++.h>

using ll = long long;

int gcd (int a, int b) {
	return b==0 ? a : gcd(b,a%b);
}

int lcm (int a, int b) {
	return a/gcd(a,b)*b;
}

void solve () {
    ll n, m;
    std::cin >> n >> m;

    std::vector<int>v(n);

    for (int i = 0; i < n; i++) {
        std::cin >> v[i];
    }

    std::sort(v.begin(), v.end());
    
    int maxGifts = 0;
    int x = 0;
    
    for (int i = 0; i < n; i++) {
        while (v[i] - v[x] >= m) {
            x++;
        }
        maxGifts = std::max(maxGifts, i - x + 1);
    }
    std::cout << maxGifts << '\n';
    
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
