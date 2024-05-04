#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int check(int N, int X, int Y, int Z) {
    if ((X < Z && Z < Y) || (Y < Z && Z < X))
        return 1;
    return 0;
}


int main () {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int N, X, Y, Z;
	cin >> N >> X >> Y >> Z;
    if (check(N, X, Y, Z)) {
        cout << "Yes" << '\n';
    } else {
        cout << "No" << '\n';
    }
	return 0;
}
