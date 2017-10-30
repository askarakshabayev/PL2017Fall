#include <iostream>

using namespace std;

int main() {
	// cin >> s; true, false
	// getline(cin, s)
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	string s;
	int k = 0;
	while (cin >> s) {
		k++;
	}
	cout << k;

	return 0;
}