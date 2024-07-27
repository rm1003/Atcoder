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

void solve () {

}

int main () {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, aux = 0;
	cin >> n;
	string s;
	for(int i = 0; i < n - 1; ++i) {
		cin >> s;
		if (s == "sweet") {
			++aux;
			if (aux == 2) {break;}
		} else {
			aux = 0;
		}
	}
	if (aux == 2) {
		cout << "No" << endl;
	} else {
		cout << "Yes" << endl;
	}


	return 0;
}
