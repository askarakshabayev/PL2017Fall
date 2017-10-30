#include <iostream>

using namespace std;
#define ll long long 

ll a[10];
ll n, res, final;
bool ok;
int cnt_4 = 0, cnt_7 = 0;

void rec(int v, int size) {
	if (v == size || ok)
		return;
	a[v] = 4;
	cnt_4++;
	res = res * 10 + a[v];
	if (res >= n && cnt_4 == cnt_7) {
		ok = true;
		final = res;
		return;
	}
	rec(v + 1, size);
	res /= 10;
	cnt_4--;

	a[v] = 7;
	cnt_7++;
	res = res * 10 + a[v];
	if (res >= n && cnt_4 == cnt_7) {
		ok = true;
		final = res;
		return;
	}
	rec(v + 1, size);
	res /= 10;
	cnt_7--;
}

int main() {
	cin >> n;
	ok = false;
	for (int i = 1; i <= 10; i++) {
		rec(0, i);
		if (ok)
			break;
	}
	cout << final;
	return 0;
}