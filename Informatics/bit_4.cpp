#include <iostream>

using namespace std;
int x[30], y[30], n;
int dist[30][30];
int dp[1 << 24];
int last[1 << 24];

int main() {
	cin >> x[0] >> y[0];
	cin >> n;
	for (int i = 1; i <= n; i++)
		cin >> x[i] >> y[i];

	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			d[i][j] = (x[i] - x[j]) * (x[i] - x[j]) + (y[i] - y[j]) * (y[i] - y[j]);

	
	return 0;
}