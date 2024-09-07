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

int m[110][110];

int main () {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n; cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cin >> m[i][j];
        }
    }
    int ind = 1;
    for (int i = 1; i <= n; i++) {
        if (ind >= i) {
            ind = m[ind][i];
        } else {
            ind = m[i][ind];
        }
    }
    cout << ind << endl;
    

	return 0;
}
