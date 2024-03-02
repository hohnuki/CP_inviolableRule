#include <iostream>
using namespace std;

int main()
{
	int n, x;

	cin >> n >> x;
	int l[n];
	for (int i = 0; i < n; i++) cin >> l[i];

	for (int i : l) {
		if (i == x) {
			cout << "Yes" << endl;
			return 0;
		}
	}
	cout << "No" << endl;
	return 0;
}
