#include <iostream>
#include <vector>

using namespace std;

vector<pair<string, int> > a;

int main() {

	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		string city;
		int x;
		cin >> city >> x;
		a.push_back(make_pair(city, x));
	}

	sort(a.begin(), a.end());
	int sum = 0;
	for (int i = 0; i < n; i++) {
		if (i == 0)
			sum = a[i].second;
		else {
			if (a[i].first == a[i - 1].first)
				sum += a[i].second;
			else {
				cout << a[i - 1].first << " " << sum << endl;
				sum = a[i].second;
			}
		}
	}
	cout << a[a.size() - 1].first << " " << sum << endl;
	return 0;
}