#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
using ll = long long;

int main() {
	ll N, Q, A[100009], L[100009], R[100009], sum[100009];
	cin >> N >> Q;
	for (ll i=0;i<N;i++) cin >> A[i];
	for (ll i=0;i<Q;i++) cin >> L[i] >> R[i];

	for (ll i=0;i<N;i++) sum[i] = sum[i-1] + A[i];

	for (ll i=0;i<Q;i++)
		cout << sum[R[i]-1] - sum[L[i]-2] << endl;

	return 0;
}