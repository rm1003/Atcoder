#include <bits/stdc++.h>

#define ll long long


int main () {
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int n, x;
	std::cin >> n >> x;
	std::vector<int> a(n - 1);
    for(int i = 0; i < n - 1; i++) std::cin >> a[i];

    for(int i = 0; i <= 100; i++){
		auto b = a;
		b.push_back(i);
		sort(b.begin(), b.end());
        int sum = 0;
        for(int j = 1; j + 1 < b.size(); j++){
            sum += b[j];
        }
        if (sum >= x){
			std::cout << i << '\n';
            return 0;
        }
    }
	std::cout << -1 << '\n';


	return 0;
}

