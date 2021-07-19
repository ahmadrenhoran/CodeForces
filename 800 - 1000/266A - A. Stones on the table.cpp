
#include <iostream>
#include <stdio.h>

using namespace std;

int main() {


        int n, counts = 0;

        cin >> n;
        char s[n];


        for (int i = 0; i < n; i++) {
            cin >> s[i];
            if ( s[i] == s[i-1]) {
                counts++;
            }

        }
        cout << counts;
        return 0;
}
