#include <iostream>
#include <set>
// pair, vector, stack, queue, set

using namespace std;

int main() {
	set<int> a;

	int n, x;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> x;
		a.insert(x);
	}

	set<int>::iterator it;

	if (a.find(8) != a.end()) {
		cout << "YES";
	} else 
		cout << "NO";
	return 0;
}