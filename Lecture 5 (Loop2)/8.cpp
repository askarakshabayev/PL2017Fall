#include <iostream>

using namespace std;

int main() {
	/*
	int n;
	cin >> n;
	int sum_all = 0;
	for (int k = 1; k <= n; k++) {	
		// k = 1, 2, 3
		int sum = 0;
		for (int i = 1; i <= k; i++) {
			sum += i;
		}
		// sum = 1, 3
		sum_all += sum;
		// sum_all += 1 + 3 + 6 + ... + (1 + 2 + ... + n)
	}
	*/

	int n;
	cin >> n;

	int sum = 0, sum_all = 0;
	for (int i = 1; i <= n; i++) {
		sum += i;
		sum_all += sum;
	}
	return 0;
}