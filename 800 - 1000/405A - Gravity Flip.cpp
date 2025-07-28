#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> space(n);

    for (int i = 0; i < n; i++) {
        cin >> space[i];
    }

    bool swapped;
    // Ascending Sort
    do {
        swapped = false;
        for (int i = 0; i < n - 1; i++) {
            if (space[i] > space[i + 1]) {
                swap(space[i], space[i + 1]);
                swapped = true;
            }
        }
    } while (swapped);

    for (int i = 0; i < n; i++) {
        cout << space[i] << " ";
    }


    return 0;
}
