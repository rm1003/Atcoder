#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long

// Maximo divisor comum
int gcd (int a, int b) {return b==0 ? a : gcd(b,a%b);}
// Minimo multiplo comum
int lcm (int a, int b) {return a/gcd(a,b)*b;}


int main () {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int a, b;
    cin >> a >> b;

    if (a == b){
        cout << -1 << endl;
    } else {
        cout << 6 - a - b << endl;
    }

	return 0;
}
