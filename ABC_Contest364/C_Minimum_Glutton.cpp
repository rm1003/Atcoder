#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long

// Maximo divisor comum
int gcd (int a, int b) {return b==0 ? a : gcd(b,a%b);}
// Minimo multiplo comum
int lcm (int a, int b) {return a/gcd(a,b)*b;}
// Fatorial
int fat (int a) {return a == 1 ? 1 : a * fat(a - 1);}


int main () {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	ll n, x, y;
    cin >> n >> x >> y;
    vector<ll> a(n), b(n);
    for (ll i = 0; i < n; ++i) {
        cin >> a[i];
    }
    for (ll i = 0; i < n; ++i) {
        cin >> b[i];
    }
    
    sort(a.rbegin(), a.rend());
    sort(b.rbegin(), b.rend());
    ll res = n;
    for (ll i = 0; i < n; ++i) {
        x -= a[i];
        //cout << a[i] << endl;
        if (x < 0) res = min(res, i + 1);
    }
    for (ll i = 0; i < n; ++i) {
        y -= b[i];
        //cout << b[i] << endl;
        if (y < 0) res = min(res, i + 1);
    }
    cout << res << endl;


	return 0;
}
