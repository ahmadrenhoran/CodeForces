#include <iostream>

using namespace std;

int main() {

    long long n, mod, counts = 0;

    cin >> n;

    while (n > 0) {
        mod = n % 10;
        if (mod == 4 || mod == 7) {
            counts++;
        }
        n /= 10;
    }

    if (counts == 4 || counts == 7) {
        cout << "YES";
    } else {

        cout << "NO";
    }

    cout << endl;
    return 0;
}
