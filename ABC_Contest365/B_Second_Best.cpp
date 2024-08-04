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

	int n;
    cin >> n;
    vector<pair<int,int>> vet(n);
    for (int i = 0; i < n;++i) {
        cin >> vet[i].first;
        vet[i].second = i;
    }
    sort(vet.rbegin(), vet.rend());
    cout << vet[1].second + 1<< endl;
   

	return 0;
}
