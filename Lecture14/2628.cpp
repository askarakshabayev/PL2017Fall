#include <iostream>
#include <set>

using namespace std;

set<int> s1, s2, s3, s4;
int n, m, x;

set<int> getDif(set<int> a, set<int> b) {

	set<int> result;

	set<int>::iterator it;
	for (it = a.begin(); it != a.end(); it++) 
		if (b.find(*it) == b.end())
			result.insert(*it);
	return result;
}

void printSet(set<int> a) {
	set<int>::iterator it;
	for (it = a.begin(); it != a.end(); it++)
		cout << *it << " ";
}

int main() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> x;
		s1.insert(x);
	}

	cin >> m;
	for (int i = 0; i < m; i++) {
		cin >> x;
		s2.insert(x);
	}

	s3 = getDif(s1, s2);
	s4 = getDif(s2, s1);
	s3.insert(s4.begin(), s4.end());

	cout << s3.size() << endl;
	printSet(s3);

	return 0;
}

