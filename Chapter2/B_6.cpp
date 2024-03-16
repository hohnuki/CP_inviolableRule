#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
using ll = long long;

int main() {
	ll N, Q, A[100009], win[100009] = {0}, lose[100009] = {0}, L[100009], R[100009];
	cin >> N;
	for (ll i=0;i<N;i++) cin >> A[i];
	cin >> Q;
	for (ll i=0;i<Q;i++) cin >> L[i] >> R[i];

	for (ll i=0;i<N;i++) {
		if (i == 0) {
			if (A[i] == 1) win[i] = 1;
			else lose[i] = 1;
		} else if (A[i] == 1) {
			win[i] = win[i-1] + 1;
			lose[i] = lose[i-1];
		} else {
			win[i] = win[i-1];
			lose[i] = lose[i-1] + 1;
		}
	}

	for (ll i=0;i<N;i++) cout << win[i] << " ";
	cout << endl;

	for (ll i=0;i<N;i++) cout << lose[i] << " ";
	cout << endl;


	for (ll i=0;i<Q;i++) {
		ll winCount = win[R[i]] - win[L[i]];
		ll loseCount = lose[R[i]] - lose[L[i]];

		if (winCount > loseCount) cout << "win" << endl;
		else if (winCount < loseCount) cout << "lose" << endl;
		else cout << "draw" << endl;
	}
	return 0;
}