// FILO
#include <iostream>
#include <stack>
// push
// pop
// top
using namespace std;

// (())()(()) - yes/no ()) (() )()
// [{[()}]()]{}
// [{[
// 

stack<char> st;

int main() {
	string s;
	cin >> s;
	int cnt = 0;
	bool ok = true;

	for (int i = 0; i < s.size(); i++) {
		if (s[i] == '[' || s[i] == '{' || s[i] == '(')
			st.push(s[i]);
		else {
			if (st.empty() == true) { // ()]
				ok = false;
				break;
			}
			if (s[i] == ']' && st.top() != '[') {
				ok = false;
				break;
			}
			if (s[i] == '}' && st.top() != '{') {
				ok = false;
				break;
			}
			if (s[i] == ')' && st.top() != '(') {
				ok = false;
				break;
			}
			st.pop();
		}
	}

	if (st.size() > 0 || ok == false)
		cout << "no";
	else
		cout << "yes";
	return 0;
}
