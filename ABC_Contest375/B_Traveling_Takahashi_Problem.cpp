#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
using ll = long long;
using ull = unsigned long long;

// Maximo divisor comum
int gcd (int a, int b) {return b==0 ? a : gcd(b,a%b);}
// Minimo multiplo comum
int lcm (int a, int b) {return a/gcd(a,b)*b;}
// Fatorial
int fat (int a) {return a == 1 ? 1 : a * fat(a - 1);}

int main () {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
    
    ll n; cin >> n;
    long double ans = 0.0;
    ll ant_x = 0, ant_y = 0;
    for (int i = 0; i < n; ++i) {
        ll x, y;
        cin >> x >> y;
        ans += (long double)sqrt(((ant_x - x)*(ant_x - x))+((ant_y - y)*(ant_y - y)));
        ant_x = x;
        ant_y = y;
    }
    ans += (long double)sqrt(((ant_x - 0)*(ant_x - 0))+((ant_y - 0)*(ant_y - 0)));
    cout << setprecision(20) << fixed << ans << endl;

	return 0;
}
