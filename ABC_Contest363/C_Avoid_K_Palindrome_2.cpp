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

	int N, K;
    string S;
    cin >> N >> K >> S;
    sort(S.begin(), S.end());
    int ans = 0;

    do {
        bool is_ans = true;
        for (int i = 0; i <= N - K; i++) {
            bool is_palindrome = true;
            for (int j = 0; j < K - j - 1; j++) {
                if (S[i + j] != S[i + K - j - 1]) {
                    is_palindrome = false;
                    break;
                }
            }
            if (is_palindrome) {
                is_ans = false;
                break;
            }
        }
        if (is_ans) {
            ans++;
        }
    } while (next_permutation(S.begin(), S.end()));

    cout << ans << endl;

	return 0;
}
