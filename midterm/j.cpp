#include <iostream>

using namespace std;
int a[100][100];
int b[100];
int n, m;

int main() {
	cin >> n >> m;

	// 1 1 1 1 
	// 2 2 2 2
	// 3 3 3 3
	// 4 4 4 4

	// 4 8 0 0 
	for (int i = 0; i < n; i++) { // i = 1
		for (int j = 0; j < m; j++) { // j = 1
			cin >> a[i][j];
			b[i] += a[i][j];
		}
	}

	int maxi = b[0];
	int k = 0;
	for (int i = 1; i < n; i++)
		if (maxi < b[i]) {
			maxi = b[i];
			k = i;
		}

	cout << k + 1;


	return 0;
}