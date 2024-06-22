#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long

// Maximo divisor comum
int gcd (int a, int b) {return b==0 ? a : gcd(b,a%b);}
// Minimo multiplo comum
int lcm (int a, int b) {return a/gcd(a,b)*b;}

int a[103];

int main () {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
    cin >> n;
    int dif = 0;

    for (int i = 0; i < 2*n; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < (2*n) - 2; i++) {
        if (a[i] == a[i + 2] && a[i] != a[i + 1]) {
            dif++;
        }
    }
    cout << dif << endl;

	return 0;
}
