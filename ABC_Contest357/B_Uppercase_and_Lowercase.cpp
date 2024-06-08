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

	string s;
    cin >> s;
    int upper, lower;
    upper = lower = 0;

    for (int i = 0; i < s.size(); i++) {
        if (s[i] >= 'A' && s[i] <= 'Z') upper++;
        else lower++;
    }

    if (upper > lower) {
        for (int i = 0; i < s.size(); i++) {
            if (s[i] >= 'a' && s[i] <= 'z') s[i] -= 32;
        }
    } else {
        for (int i = 0; i < s.size(); i++) {
            if (s[i] >= 'A' && s[i] <= 'Z') s[i] += 32;
        }
    }
    cout << s << endl;
	return 0;
}
