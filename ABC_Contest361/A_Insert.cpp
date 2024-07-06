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

	int N, K, X;
    cin >> N >> K >> X;
    
    int i = 0, A;
    while (i <= N) {
        if (i != K) {
            cin >> A;
            cout << A << ' ';
        } else {
            cout << X << ' ';
        }
        i++;
    }
    cout << endl;


	return 0;
}
