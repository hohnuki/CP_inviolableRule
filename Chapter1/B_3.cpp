#include <iostream>
#include <algorithm>
using namespace std;
using ll = long long;

int main() {
	ll N;
	ll A[109];

	cin >> N;
	for (ll i=0; i<N; i++) cin >> A[i];

	for (ll i=0; i<N; i++) {
		for (ll j=i+1; j<N; j++) {
			for (ll k=j+1; k<N; k++) {
				if (A[i] + A[j] + A[k] == 1000) {
					cout << "Yes" << endl;
					return 0;
				}
			}
		}
	}
	cout << "No" << endl;
	return 0;
}