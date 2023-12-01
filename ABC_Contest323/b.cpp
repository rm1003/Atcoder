#include <bits/stdc++.h>

using ll = long long;

int gcd (int a, int b) {
	return b==0 ? a : gcd(b,a%b);
}

int lcm (int a, int b) {
	return a/gcd(a,b)*b;
}

struct player {
    int pNumber;
    int wins;
};

bool comparePlayer(const player &p1, const player &p2) {
    if (p1.wins != p2.wins) {
        return p1.wins > p2.wins;
    }
    return p1.pNumber < p2.pNumber;
}

int main () {
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int n;
    std::cin >> n;

    std::vector<player> players(n);
    for (int i = 0; i < n; i++) {
        players[i].pNumber = i + 1;
        players[i].wins = 0;
        std::string res;
        std::cin >> res;
        for (int j = 0; j < n; j++) {
            if (res[j] == 'o') {
                players[i].wins++;
            }
        }
    }

    std::sort(players.begin(), players.end(), comparePlayer);
    for (int i = 0; i < n; i++) {
        std::cout << players[i].pNumber << ' ';
    }
    std::cout << '\n';

	return 0;
}

