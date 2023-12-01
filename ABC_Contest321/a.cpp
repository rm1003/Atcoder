#include <bits/stdc++.h>

#define ll long long

bool solve (int n) {
	int aux, aux2;
	
	aux = n % 10;
	if (n == 0)
		return 0;
	while (n > 10) {
		n /= 10;
		aux2 = n % 10;

		if (aux2 <= aux)
			return 0;

		aux = aux2;
	}
	
	return 1;
}


int main () {
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int n;
	std::cin >> n;
	bool ans = solve(n);
	
	if (ans)
		std::cout << "Yes\n";
	else
		std::cout << "No\n";

	return 0;
}

