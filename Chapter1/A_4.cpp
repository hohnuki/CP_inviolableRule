#include <iostream>
#include <algorithm>
using namespace std;
using ll = long long;

int main() {
	ll N, ans[10] = {0};
	cin >> N;

	for (ll i = 0; i < 10; i++) {
		ll bit = 1;
		for (ll j = 0; j < i; j++) bit *= 2;

		if (N & bit) ans[i] = 1;
		else ans[i] = 0;
	}
	for (ll i = 9; i >= 0; i--) cout << ans[i];
	cout << endl;
}