#include <iostream>
#include <map>

using namespace std;

int main() {
	// map<key, value> name;
	map<string, int> a;
	
	int n; 
	cin >> n;
	for (int i = 0; i < n; i++) {
		string city;
		int value;
		cin >> city >> value;
		a[city] += value;
	}	

	map<string, int>::iterator it;
	for (it = a.begin(); it != a.end(); it++) {
		cout << (*it).first << " " << (*it).second << endl;
	}

	return 0;
}