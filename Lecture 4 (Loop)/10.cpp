// asd1afd223asdf47a s[0] = 'a' s[5] = 'f' s.size()
// 1 2 2 3 4 7

#include <iostream>

using namespace std;

int main() {
	string s;
	cin >> s;
	cout << s.size() << endl;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] >= '0' && s[i] <= '9') {
			cout << s[i] << " ";
		}
	}
	return 0;
}