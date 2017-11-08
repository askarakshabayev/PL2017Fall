#include <iostream>
#include <vector>

using namespace std;

vector<pair<int, int> > v;

int main() {
	freopen("b.in", "r", stdin);
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int x, y;
		cin >> x >> y;
		v.push_back(make_pair(x, y));
	}

	sort(v.rbegin(), v.rend());

	for (int i = 0; i < v.size(); i++) {
		cout << v[i].first << " " << v[i].second << endl;
	}
	return 0;
}