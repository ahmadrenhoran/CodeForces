
#include <iostream>
#include <stdio.h>

using namespace std;

int main() {


        string s;

        cin >> s;


        if (int(s[0]) >= 97) {
            s[0]  = char(int(s[0] - 32));
        }

        cout << s;
        //cout << char(int(s[0] - 32));

       /* if (int(s[0]) < 90) {
            strcpy(s[0], )
        } */
        return 0;
}
