#include <iostream>

using namespace std;

pair<int, int> points[20];
int n;

int main() {
	freopen("b.in", "r", stdin);
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> points[i].first >> points[i].second;
	}

	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++)
			if (points[i].first > points[j].first)
				swap(points[i], points[j]);
			else if (points[i].first == points[j].first && points[i].second > points[j].second)
				swap(points[i], points[j]);				
	}
	// sort(points, points + n);

	for (int i = 0; i < n; i++)
		cout << points[i].first << " " << points[i].second << endl;
	return 0;	
}