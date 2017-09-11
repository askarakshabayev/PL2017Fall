// a, b => gcd(a, b)
// 24, 32 => 8

#include <iostream>

using namespace std;

int main() {
	int a, b;
	cin >> a >> b;
	while (a > 0 && b > 0) {
		if (a > b)
			a %= b;
		else
			b %= a;
	}
	cout << a + b;
	return 0;
}