#include <iostream>

using namespace std;

int main() {
	int a, n, p = 1;
	for (int i = 1; i <= n; i++) {
		p = p * a; // p = a * a * a * a ... 
	}
	cout << p;
	return 0;
}