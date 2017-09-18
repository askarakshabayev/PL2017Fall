#include <iostream>

using namespace std;

int main() {
	for (int i = 100; i <= 999; i++) {
		if ((i * i) % 1000 == i)
			cout << i << " ";
	}

	return 0;
}