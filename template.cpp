#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long

// Maximo divisor comum
int gcd (int a, int b) {return b==0 ? a : gcd(b,a%b);}
// Minimo multiplo comum
int lcm (int a, int b) {return a/gcd(a,b)*b;}

void solve () {

}

int main () {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
    cin >> t;

    while (t--) {
        solve();
    }

	return 0;
}
