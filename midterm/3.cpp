#include <iostream>

using namespace std;

int n, l, r, a[110];

int main() {
	cin >> n >> l >> r;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	l--;
	r--;

	// 1 2 7 4 5 6 3 8 9
	while (l < r) {
		swap(a[l], a[r]);
		l++;
		r--;
	}

	for (int i = 0; i < n; i++)
		cout << a[i] << " ";

	return 0;
}