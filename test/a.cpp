#include <iostream>

using namespace std;



int main() {
        int a[10];
        /*
        cin >> s;
        for (int i = 0; i < s.size(); i++) {
                int index = s[i] - 'a';
                a[index]++;
        }

        int k = 0;
        for (int i = 0; i < 26; i++) {
                if (a[i] > 0) {
                        k++;
                }
        }

        cout << k << endl;
        for (int i = 0; i < 26; i++) {
                if (a[i] > 0) {
                        cout << (char)(i + 'a') << " " << a[i] << endl;
                }
        }
        */

        int x;
        while (cin >> x && x > 0) {
                a[x]++;
        }
        for (int i = 1; i <= 9; i++)
                cout << a[i] << " ";

        return 0;
}