#include <iostream>
#include <sstream>

using namespace std;

int sToi(string s) {
	stringstream ss;
	ss << s;
	int x;
	ss >> x;
	return x;
}

int main() {
	string s;
	cin >> s; // "12"
	int a = sToi(s);
	cout << a * a;
	return 0;
}