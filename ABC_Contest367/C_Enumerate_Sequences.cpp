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

int n, k, r[11], a[11];
// a[10] eh vetor auxiliar, para guardar valores atuais.

void dfs (int x) {
    if (x > n) {
        // aqui a logica principal do programa
        int sum = 0;
        for (int i = 1; i <= n; i++) {
            sum += a[i]; // soma todos elementos
        }
        if (sum % k == 0) {
            for (int i = 1; i <= n; i++) {
                cout << a[i] << ' '; // imprime todos elementos
            }
            cout << endl;
        }
        return;
    }
    // aqui a chamada recursiva
    // enquanto i menor que r[x] pois preciso percorrer todos numeros
    // ate valor de r[x], ou seja, se r[x] == 3, preciso percorrer 1 2 e 3.
    for (int i = 1; i <= r[x]; i++) {
        a[x] = i;
        dfs(x+1);
    }
}

int main () {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

    cin >> n >> k;
    for (int i = 1; i <= n; i++) {
        cin >> r[i];
    }
    dfs(1);
    

	return 0;
}
