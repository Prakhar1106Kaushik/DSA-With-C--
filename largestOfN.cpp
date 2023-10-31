#include <iostream>
#include <climits>
using namespace std;

int main() {

	int n, no;
	cin >> n;

	int i = 1, lar = INT_MIN;
	while (i <= n) {

		cin >> no;

		if (no > lar) {
			lar = no;
		}

		i = i + 1;
	}
	cout << "Largest Number: " << lar << endl;

	return 0;
}