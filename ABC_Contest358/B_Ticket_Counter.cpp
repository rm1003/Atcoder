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

    int N, A, atual = 0;
    cin >> N >> A;
    
    for(int i = 0; i < N; i++) {
        int x;
        cin >> x;
        if (x > atual)
            atual = x;
        atual += A;
        cout << atual << endl;   
    }


	return 0;
}
