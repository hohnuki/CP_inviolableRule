#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
using ll = long long;

int main() {
	ll N;
	cin >> N;
	string N_str = to_string(N);
	ll digit = N_str.size();
	ll ans = 0;

	for (ll i = digit - 1; i >= 0; i--) {
		if (N_str[i] == '1') {
			ans += std::pow(2, digit - 1 - i);
		}
	}

	cout << ans << endl;
	return 0;
}