#include <iostream>
#include <cmath>

using namespace std;

int fact(int x) { // x = n
	int f = 1;
	for (int i = 1; i <= x; i++)
		f *= i;
	return f;
}

int c_n_k(int n, int k) {
	return fact(n) / (fact(k) * fact(n - k));
} 


int main() {
	int n, k;
	cin >> n >> k;
	cout << c_n_k(n, k);
	return 0;
}