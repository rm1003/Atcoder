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

	int n; cin >> n;
    vector<int>a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    ll t = 1;
    for (int i = 0; i < n; i++) {
        t += 3 * (a[i]/5);
        a[i] %= 5;
        while (a[i] > 0){
            if (t % 3 == 0) {
                a[i]-=3;
            }else{
                a[i]--;
            }
            t++;
        }
    }
    cout << t - 1 << endl;
	return 0;
}
