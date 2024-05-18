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

    int N, C, count;
    string S;
    cin >> N;
    vector<string> v;
    count = 0;
    for (int i = 0; i < N; i++) {
        cin >> S >> C;
        v.emplace_back(S);
        count += C;
    }
    sort(v.begin(), v.end());
    int winner = count % N;

    cout << v[winner] << endl;

	return 0;
}
