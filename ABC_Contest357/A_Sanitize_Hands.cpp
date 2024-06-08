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

    int n, m, h;
    cin >> n >> m;

    int i, sum = 0;
    for(i = 0; i < n; i++) {
        cin >> h;
        sum += h;
        if (sum > m) break;
    }
    cout << i << endl;

	return 0;
}
