#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long

int gcd (int a, int b) {
	return b==0 ? a : gcd(b,a%b);
}

int lcm (int a, int b) {
	return a/gcd(a,b)*b;
}

int main () {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int H, p, i;
    cin >> H;
    p = 1;
    i = 1;
    for (i; p <= H; i++){
        p = p * 2 + 1;
    }
    cout << i << endl;

	return 0;
}
