#include <iostream>
using namespace std;

int A, B;
bool ans = false;

int main() {
	cin >> A >> B;

	for (int i = A; i <= B; i++) {
		if (100 % i == 0)
			ans = true;
	}

	if (ans)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
	return 0;
}