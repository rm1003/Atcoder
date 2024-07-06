#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long

// Maximo divisor comum
int gcd (int a, int b) {return b==0 ? a : gcd(b,a%b);}
// Minimo multiplo comum
int lcm (int a, int b) {return a/gcd(a,b)*b;}

bool inter(int x1, int y1, int x2, int y2) {
    if (x1 > x2) {
        swap(x1, x2);
        swap(y1, y2);
    }
    return x2 < y1;
}

int main () {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int x1,x2,x3,y1,y2,y3, a,b,c,d,e,f;
    cin >> x1 >> x2 >> x3 >> y1 >> y2 >> y3;
    cin >> a >> b >> c >> d >> e >> f;
    cout << ((inter(x1,y1,a,d)&&inter(x2,y2,b,e)&&inter(x3,y3,c,f)) ? "Yes\n" : "No\n");

	return 0;
}
