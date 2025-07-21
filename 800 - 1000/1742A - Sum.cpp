#include <iostream>

using namespace std;

int main() {
    int n, a, b, c;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> a >> b >> c;
        if (a + b == c) cout << "YES" << endl;
        else if (c + b == a) cout << "YES" << endl;
        else if (a + c == b) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

}
