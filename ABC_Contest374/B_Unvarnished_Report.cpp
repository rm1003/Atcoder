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


int main () {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	string s,t; cin >> s >> t;
    int count = 0;
    int lenS = s.length();
    int lenT = t.length();
    int minL = min(lenS, lenT);
    
    for (int i = 0; i < minL; ++i) {
        if (s[i] != t[i]) {
            cout << i + 1 << endl;
            return 0;
        }
    }

    if (lenS != lenT) {
        cout << minL+1 << endl;
    } else {
        cout << 0 << endl;
    }


	return 0;
}
