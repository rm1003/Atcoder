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

void solve () {

}

int main () {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int l, r; cin >> l >> r;
    if ((l == 1 && r == 1) || (l == 0 && r == 0)) cout << "Invalid" << endl;
    else if (l == 1) cout << "Yes" << endl;
    else cout << "No" << endl;
    

	return 0;
}
