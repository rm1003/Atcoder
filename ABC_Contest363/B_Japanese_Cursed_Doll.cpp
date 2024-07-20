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

    int N, T, P;
    int x;
    cin >> N >> T >> P;
    vector<int> v(N);
    for (int i = 0; i < N; i++) {
        cin >> x;
        v.push_back(x);
    }

    sort(v.rbegin(), v.rend());

    cout << (T < v[P - 1] ? 0 : (T - v[P - 1])) << endl;

	return 0;
}
