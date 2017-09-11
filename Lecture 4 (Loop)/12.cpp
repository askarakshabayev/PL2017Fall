// cin -> true, false
#include <iostream>

using namespace std;

int main() {
	freopen("input.txt", "r", stdin);

	string s; // getline(cin, s);
	int k = 0;
	while (getline(cin, s)) {
		cout << s << endl;
		k++;		
	}
	cout << k;
	return 0;
}