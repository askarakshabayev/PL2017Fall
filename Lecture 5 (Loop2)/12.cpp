#include <iostream>

using namespace std;

int main() {
	int x, sum = 0;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> x;
		sum += x;
//		cout << x << " " << sum << endl;
	}
	cout << sum;
	return 0;
}