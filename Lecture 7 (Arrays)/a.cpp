#include <iostream>

using namespace std;

int main() {
	int a, b, c;
	cin >> a >> b >> c;
	/*
	char ch_a = 'a';
	char ch_b = 'b';
	if (a > b) {
		swap(a, b);
		swap(ch_a, ch_b);
	}
	*/

	int a1 = a, b1 = b;
	int gcd;

	while (a1 > 0 && b1 > 0) {
		if (a1 > b1)
			a1 %= b1;
		else
			b1 %= a1;
	}
	/*
	for (int i = min(a, b); i >= 1; i--) {
		if (a % i == 0 && b % i == 0) {
			gcd = i;
			break;
		}
	}
	*/

	gcd = a1 + b1;

	// a = 24, b = 32, c = 16
	if (a < b) {
		if (c % gcd == 0 && (c <= a || c <= b)) {
			int cnt_b = 0;
			while (cnt_b != c) {
				cout << ">" << 'a' << endl; 
				cout << 'a' << ">" << 'b' << endl;
				cnt_b += a;
				if (cnt_b > b) {
					cnt_b -= b;
					cout << 'b' << ">" << endl;
					cout << 'a' << ">" << 'b' << endl;
				}
			}
		} else {
			cout << "Impossible";
		}
	} else {
		if (c % gcd == 0 && (c <= a || c <= b)) {
			int cnt_b = 0;
			while (cnt_b != c) {
				cout << ">" << 'b' << endl; 
				cout << 'b' << ">" << 'a' << endl;
				cnt_b += a;
				if (cnt_b > b) {
					cnt_b -= b;
					cout << 'a' << ">" << endl;
					cout << 'b' << ">" << 'a' << endl;
				}
			}
		} else {
			cout << "Impossible";
		}		
	}
	// a = 0
	// b = 5 

	return 0;
}