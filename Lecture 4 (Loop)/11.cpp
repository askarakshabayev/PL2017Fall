// working with files
#include <iostream>

using namespace std;

int main() {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	
	int n, x, sum = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> x;
		sum += x;
	}
	cout << sum;

	return 0;
}