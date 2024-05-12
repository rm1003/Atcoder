#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long

int gcd (int a, int b) {
	return b==0 ? a : gcd(b,a%b);
}

int lcm (int a, int b) {
	return a/gcd(a,b)*b;
}

int main () {
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int n, h, m;
    cin >> n >> h;
    for (int i = 2; i <= n; i++) {
        cin >> m;
        if (m > h) {
            cout << i << endl;
            return 0;
        }
    }
    cout << "-1" << endl;

	return 0;
}
