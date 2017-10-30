#include <iostream>

using namespace std;

int a[110][110];
int n, s;

int main() {
	cin >> n;
	for (int i = 0; i < n; i++) { // row
		for (int j = 0; j < n; j++) { // col
			cin >> a[i][j];
		}
	}

	s = 0;
	for (int i = 0; i < n; i++)
		s += a[i][i];

	cout << s << endl;
	s = 0;

	// 1 2 3 4 
	// 5 6 7 8
	// 9 1 2 3
	// 4 5 6 7

	// i = 0(3), 1(2), 2(1), 3(0)
	for (int i = 0; i < n; i++) 
		s += a[i][n - i - 1];

	cout << s << endl;

	cout << endl;
	return 0;
}