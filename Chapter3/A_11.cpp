#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
using ll = long long;

int main() {
	ll N, X, A[100009];
	cin >> N >> X;
	for (ll i=0;i<N;i++) cin >> A[i];

	ll L = 0, R = N-1;
	for (;;) {
		ll index = (L+R)/2;
		if (A[index-1] > X) R = index-1;
		else if (A[index-1] < X) L = index+1;
		else if (A[index-1] == X) {
			cout << index << endl;
			return 0;#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
using ll = long long;

int main() {
	ll N, X, A[100009];
	cin >> N >> X;
	for (ll i=0;i<N;i++) cin >> A[i];

	ll L = 0, R = N-1;
	for (;;) {
		ll index = (L+R)/2;
		if (A[index-1] > X) R = index-1;
		else if (A[index-1] < X) L = index+1;
		else if (A[index-1] == X) {
			cout << index << endl;
			return 0;
		}
	}
	return 0;
}
		}
	}
	return 0;
}