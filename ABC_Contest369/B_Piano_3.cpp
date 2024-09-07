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
    int left, right, ans = 0;
    left = right = 0;
    for (int i = 0; i < n; i++) {
        int x; char s;
        cin >> x >> s;
        if (s == 'L') {
            if (left == 0) left = x;
            else {
                ans += abs(left-x);
                left = x;
            }
        } else {
            if (right == 0) right = x;
            else {
                ans += abs(right-x);
                right = x;
            }
        }
    }
    cout << ans << endl;

	return 0;
}
