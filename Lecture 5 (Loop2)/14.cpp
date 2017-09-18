#include <iostream>

using namespace std;

int main() {
	// 10 .. 99  xy = 2 * x * y

	for (int i = 10; i <= 99; i++) {
		if (i == 2 * (i / 10) * (i % 10)) {
			cout << i << " ";
		}
	}
	return 0;
}