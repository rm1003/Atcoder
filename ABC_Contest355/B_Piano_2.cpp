#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long

// Maximo divisor comum
int gcd (int a, int b) {return b==0 ? a : gcd(b,a%b);}
// Minimo multiplo comum
int lcm (int a, int b) {return a/gcd(a,b)*b;}

struct node {
    int val, id;
};
vector<node> v;

bool cmp(node x, node y){
    return x.val < y.val;
}

int main () {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, m;
    cin >> n >> m;

    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        v.push_back({x, 1});
    }
    for (int i = 1; i <= m; i++) {
        int x;
        cin >> x;
        v.push_back({x, 2});
    }

    sort(v.begin(), v.end(), cmp);

    for (int i = 0; i < n + m - 1; i++) {
        if (v[i].id == v[i + 1].id && v[i].id == 1) {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;


	return 0;
}
