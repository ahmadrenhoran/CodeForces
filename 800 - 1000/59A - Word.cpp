#include <iostream>
#include <cctype>
#include <string>
using namespace std;


int main() {

    string s;

    cin >> s;
    int upper = 0, lower = 0;
    for (int i = 0; i < s.length(); i++) {
        if (isupper(s[i])) {
            upper++;
        } else {
            lower++;
        }



    }
    int k =0;
    do {
        if (lower == upper) {
            if (int(s[k]) <= 90) {
                s[k] = char(int(s[k]) + 32);
            }
        } else if(upper > lower){
            if (int(s[k]) >= 97) {
                s[k] = char(int(s[k]) - 32);
            }
        } else if(lower > upper) {
            if (int(s[k]) <= 90) {
                s[k] = char(int(s[k]) + 32);
            }
        }

        k++;

    } while (k < s.length());

    cout << s;

    return 0;
}
