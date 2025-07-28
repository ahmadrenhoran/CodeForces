#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, totalCoinVal = 0, counterMyCoin = 0, totalMyCoinVal = 0;
    cin >> n;
    vector<int> coins(n);

    for (int i = 0; i < n; i++) {
        cin >> coins[i];
        totalCoinVal += coins[i];
    }

    // Bubble Sort Descending
    bool swapped;
    do {
        swapped = false;
        for (int i = 0; i < n - 1; i++) {
            if (coins[i] < coins[i + 1]) {
                swap(coins[i], coins[i + 1]);
                swapped = true;
            }
        }
    } while (swapped);

    for (int i = 0; i < n; i++) {
        totalMyCoinVal += coins[i];
        counterMyCoin++;
        if (totalMyCoinVal > totalCoinVal - totalMyCoinVal) {
            break;
        }
    }
    cout << counterMyCoin << endl;
}
