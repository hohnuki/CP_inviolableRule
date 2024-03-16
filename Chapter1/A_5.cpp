#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
using ll = long long;

int main() {
	ll N, K, ans = 0;
	cin >> N >> K;

	for (ll i=1;i<=N;i++)
		for (ll j=1;j<=N;j++) {
			ll tmp = K-i-j;// 白いカードに書かれるべき整数
			if (0 < tmp && tmp <= N) ans++;
		}
	cout << ans << endl;
	return 0;
}