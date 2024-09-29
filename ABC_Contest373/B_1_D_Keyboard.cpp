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

    string s; cin >> s;
    vector<int> a(27);
    for (int i = 0; i < s.length(); ++i) {
        a[s[i]- 'A'] = i;
    }
    int count = 0;
    for (int i = 1; i < s.length(); ++i) {
        count += abs(a[i] - a[i-1]);
    }
    cout << count << endl;
	

	return 0;
}
