#include <iostream>

using namespace std;

int main() {
	// cin >> s; true, false
	// getline(cin, s)
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	string s;
	bool ok;
	ok = (cin >> s);
	cout << ok << " " << s << endl;

	ok = (cin >> s);
	cout << ok << " " << s << endl;

	ok = (cin >> s);
	cout << ok << " " << s << endl;

	ok = (cin >> s);
	cout << ok << " " << s << endl;

	ok = (cin >> s);
	cout << ok << " " << s << endl;

	return 0;
}