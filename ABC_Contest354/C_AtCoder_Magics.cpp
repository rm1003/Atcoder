#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long

// Maximo divisor comum
int gcd (int a, int b) {return b==0 ? a : gcd(b,a%b);}
// Minimo multiplo comum
int lcm (int a, int b) {return a/gcd(a,b)*b;}

/*
	Algoritmo Guloso para determinar qual a carta fraca e descartar
	com as seguintes restricoes:
		- se o custo da carta é muito grande
		- e se a carta tem valor fraca de mais
*/


struct card {
    int val, cost, id;
}a[200005];

bool cmp(card x, card y) {
    return x.val > y.val;
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        int val, cost;
        cin >> val >> cost;
        a[i] = {val, cost, i};
    }
    sort(a + 1, a + 1 + n, cmp);
    int min_cost = 2e9;

    vector<int> ans;
    for (int i = 1; i <= n; i++) {
        if (a[i].cost < min_cost) {
            ans.push_back(a[i].id);
            min_cost = a[i].cost;
        }
    }

    sort(ans.begin(), ans.end());

    cout << ans.size() << endl;
    for (auto x: ans) {
        cout << x << " ";
    }
	return 0;
}