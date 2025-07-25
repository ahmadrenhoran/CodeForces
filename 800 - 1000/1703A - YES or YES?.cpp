#include <cctype>
#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        string s;
        cin >> s;
        if (tolower(s.at(0)) == 'y' && tolower(s.at(1)) == 'e' && tolower(s.at(2)) == 's') {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}
