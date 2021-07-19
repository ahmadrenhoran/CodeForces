
#include <iostream>

    using namespace std;

    int main() {

        string s1, s2;
        cin >> s1;
        cin >> s2;


        int i = 0;
        int a, b;
        do {

            a = int(s1[i]); b = int(s2[i]);
            i++;
             if (a <= 90) {
                a += 32;
            }
            if (b <= 90) {
                b += 32;
            }

        } while (i < s1.length() && a == b);


        if (a == b) {
            cout << 0;
        } else if (a < b) {
            cout << -1;
        } else if (a > b) {
            cout << 1;
        }

        return 0;
    }
