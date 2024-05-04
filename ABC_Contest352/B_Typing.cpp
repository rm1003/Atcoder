#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int gcd (int a, int b) {
	return b==0 ? a : gcd(b,a%b);
}

int lcm (int a, int b) {
	return a/gcd(a,b)*b;
}

void solve () {

    string S, T;
    cin >> S >> T;
    int j = 0;
    for (int i = 0; i < S.size(); i++) {
        for (j; j < T.size(); j++) {
            if (S[i] == T[j]) {
                cout << j + 1 << ' ';
                j++;
                break;
            }
        }
    }
    cout << '\n';
}

int main () {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int t = 1;

    while (t--) {
        solve();
    }

	return 0;
}
