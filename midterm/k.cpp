// 1 2 3     7 4 1
// 4 5 6 ->  8 5 2 (i, j) -> (j, n - i - 1)
// 7 8 9 	 9 6 3

	

// (0, 1) -> (1, 2)
#include <iostream>

using namespace std;
int a[100][100], b[100][100];
int x;
int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> a[i][j];
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			b[j][n - i - 1] = a[i][j];
		}
	}	

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << b[i][j] << " ";
		}
		cout << endl;
	}		
	return 0;
}