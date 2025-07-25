#include <iostream>
#include <vector>

using namespace std;
int main() {
    int n ;
    cin >> n;
    vector<int> card(n);

    for(int i = 0; i < n; i++) {
        cin >> card[i];
    }
    int mostLeftIndex = 0, mostRightIndex = n - 1, serejaSum = 0, dimaSum = 0, turn = 0;

    while (mostLeftIndex <= mostRightIndex) {
        if (card[mostLeftIndex] >= card[mostRightIndex]) {
            if (turn % 2 == 1) {
                serejaSum += card[mostLeftIndex];
            } else {
                dimaSum += card[mostLeftIndex];
            }
            mostLeftIndex++;
        } else {
            if (turn % 2 == 1) {
                serejaSum += card[mostRightIndex];
            } else {
                dimaSum += card[mostRightIndex];
            }
            mostRightIndex--;
        }
        turn++;
    }
    cout << dimaSum << " " << serejaSum << endl;
}
