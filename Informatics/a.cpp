#include <iostream>
#include <algorithm>

using namespace std;

int n, k, cnt;

int a[101];

void print() {
	for (int i = 0; i < n; i++)
		cout << a[i];
	cout << endl;
}

void rec(int v) {
	if (v == n)
		return;
	for (int i = 0; i <= 1; i++) {
		a[v] = i;
		cnt += i;
		if (cnt == k) 
			print();
		else 
			rec(v + 1);
		cnt -= i;
		a[v] = 0;
	}
}

int main() {
	cin >> n >> k;
	cnt = 0;
	/*
	for (int i = 0; i < k; i++)
		a[n - i - 1] = 1;

	do {
		for (int i = 0; i < n; i++)
			cout << a[i];
		cout << endl;
	} while (next_permutation(a, a + n));
	*/

	rec(0);
	return 0;
}