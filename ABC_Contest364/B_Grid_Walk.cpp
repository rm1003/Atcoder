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

	int h, w, y, x;
    string pos;
    cin >> h >> w >> y >> x;
    y--;
    x--;
    vector<string> s(h);
    for (int i = 0; i < h; ++i) {
        cin >> s[i];
    }

    cin >> pos;
    for (auto j : pos) {
        int nx = x;
        int ny = y;
        if (j == 'L') {
            nx--;
        } else if (j == 'R') {
            nx++;
        } else if (j == 'U') {
            ny--;
        } else {
            ny++;
        }
        if (nx >= 0 && nx < w && ny >= 0 && ny < h && s[ny][nx] == '.') {
            x = nx;
            y = ny;
        }
    }
    cout << y + 1 << ' ' << x + 1 << endl;

	return 0;
}
