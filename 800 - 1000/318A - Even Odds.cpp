#include <iostream>
using namespace std;

int main() {
    long long n, k;
    cin >> n >> k;

    if (k <= (n + 1) / 2) { // Odd
        cout << (k * 2) - 1 << endl;
    } else { // Even
        cout << 2 * (k - (n + 1) / 2) << endl;
    }

    return 0;
}
