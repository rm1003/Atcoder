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

void solve () {

}

int main () {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	float n; cin >> n;
    cout << n << endl;

	return 0;
}
