#include <iostream>

using namespace std;

int main() {

    int n, p, q, counts = 0;

    cin >> n;

    while (n--) {
        cin >> p >> q;

        if (p+2 <= q) {
            counts++;
        }

    }

    cout << counts;


    return 0;
}
