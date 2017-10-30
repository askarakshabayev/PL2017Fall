#include <iostream>

using namespace std;

int main() {

	string s = "hello worlld";
	string s1 = "ll";

	int k = 0;
	while (true) {
		int pos = s.find(s1, k); // pos = 9
		if (pos == string::npos)
			break;
		cout << pos << endl;
		k = pos + 1; 			 // k = 10
	}

	// substr
	// string s1 = s.substr(2, 3);
	// cout << s1;

	// insert
	// string s1 = "abc";
	// s.insert(2, s1);
	// cout << s;	

	// erase
	// s.erase(2, 3);
	// cout << s;

	// append
	// string s1 = "abcdefg";
	// s.append(s1, 2, 3);
	// cout << s;

	// copy
	// int n = s.size();
	// char buf[n - 2];
	// s.copy(buf, n - 2, 1);
	// cout << buf;

	return 0;
}