#include <iostream>
#include <sstream>

using namespace std;

int main() {
	// getline(cin, s)
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	string s;
	int x, y, z;
	while (getline(cin, s)) { // s = "asd  bsd csd"
		// s = "3 4 5 23 1 6"
		stringstream ss;
		ss << s; // "3 4 5 23 1 6"
		ss >> x >> y >> z;
		cout << x << " " << y << " " << z << endl;
	}
	return 0;
}