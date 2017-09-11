#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;
	for (int i = 2; i <= n; i=i+2) {
		cout << i << " "; // 2 4 6 8 10 ...
	}
	cout << endl;
	for (int i = 1; i <= n; i=i+2) {
		cout << i << " "; // 1 3 5 7 9 ...
	}

	return 0;
}