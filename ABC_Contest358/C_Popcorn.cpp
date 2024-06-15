#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long

// Maximo divisor comum
int gcd (int a, int b) {return b==0 ? a : gcd(b,a%b);}
// Minimo multiplo comum
int lcm (int a, int b) {return a/gcd(a,b)*b;}

string s[20];
bool choose[20];
int mn = 1e9;
int n, m;

bool check() {
    vector<bool> ok(m, 0);
    for (int i = 1; i <= n; i++) {
        if (!choose[i]) continue ;
        for (int j = 0; j < m; j++) if (s[i][j] == 'o') ok[j] = true;
    }
    for (int i = 0; i < m; i++) if (!ok[i]) return false;
    return true;
}

void dfs(int now) {
    if (now == n + 1) {
        if (check()) {
            int cnt = 0;
            for (int i = 1; i <= n; i++) cnt += choose[i];
            mn = min(mn, cnt);
        }
        return;
    }

    choose[now] = true;
    dfs(now + 1);
    choose[now] = false;
    dfs(now + 1);
}

int main () {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

    cin >> n >> m;

    for (int i = 1; i <= n; i++) {
        cin >> s[i];
    }
    dfs(1);
    cout << mn << endl;

	return 0;
}
