#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n, k, l, c, d, p, nl, np;
    int total_toast, total_limes, total_salt;

    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    total_toast = (k * l) / nl;
    total_limes = c * d;
    total_salt = p / np;
    int max_toasts = min({total_toast, total_limes, total_salt}) / n;

    cout << max_toasts;
}
