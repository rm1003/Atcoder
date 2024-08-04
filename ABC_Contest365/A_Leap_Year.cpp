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

	int n;
    cin >> n;
    if (n%4!=0) cout << 365 << endl;
    else if (n%100!=0 && n%4==0) cout << 366 << endl;
    else if (n%400!=0 && n%100==0) cout << 365 << endl;
    else cout << 366 << endl;
	return 0;
}
