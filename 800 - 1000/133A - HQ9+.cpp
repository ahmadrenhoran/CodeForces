#include <iostream>
#include <string>

using namespace std;

int main () {
    string p = "";

    cin >> p;

    for (int i = 0; i < p.length(); i++) {
        char currentChar = p.at(i);
        if (currentChar == 'H' || currentChar == 'Q' || currentChar == '9') {
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;
    return 0;
}
