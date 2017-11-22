#include <iostream>
#include <vector>

using namespace std;

bool compare(string s1, string s2) {
	// s1 = 'asdad'
	// s2 = 'dfasd'

	if (s1.size() < s2.size())
		return true;
	if (s2.size() < s1.size()) 
		return false;
	return (s1 < s2);
}

int main() {
	vector<string> v;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		string s;
		cin >> s;
		v.push_back(s);
	}

	// for (int i = 0; i < n; i++) {
	// 	for (int j = i + 1; j < n; j++)
	// 		if (compare(s[i], s[j]))
	// 			swap(s[i], s[j]);
	// }
	sort(v.begin(), v.end(), compare);

	for (int i = 0; i < n; i++)
		cout << v[i] << endl;
	return 0;
}