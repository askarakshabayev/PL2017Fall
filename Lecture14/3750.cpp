#include <iostream>
#include <set>
#include <sstream>

using namespace std;

set<int> readSet(string s) {
	stringstream ss;
	ss << s;
	set<int> result;
	int x;
	while (ss >> x)
		result.insert(x);

	return result;
}

int main() {
	string s1, s2;
	getline(cin, s1);
	getline(cin, s2);
	set<int> set1 = readSet(s1);
	set<int> set2 = readSet(s2);

	int cnt = 0;
	set<int>::iterator it;
	for (it = set1.begin(); it != set1.end(); it++) 
		if (set2.find(*it) == set2.end())
			cnt++;

	cout << cnt;
	return 0;
}