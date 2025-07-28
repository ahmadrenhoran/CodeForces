#include <iostream>

using namespace std;

int main() {

    string s, output;
    cin >> s;

    for (int i = 0; i < s.length(); i++) {
        if (s.at(i) == 'W' && s.at(i + 1) == 'U' && s.at(i+2) == 'B'){
            output += " ";
        }
    }
    cout << output << endl;
    return 0;
}
