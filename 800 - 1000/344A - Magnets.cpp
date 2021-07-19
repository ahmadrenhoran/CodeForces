#include <iostream>

using namespace std;

int main() {

    int n;
    cin >> n;
    int magnet[n], counts = 1;


    for (int i = 0; i < n; i++) {

        cin >> magnet[i];
        if (i >= 1) {
            if (magnet[i] != magnet[i-1]) {
                counts++;
            }

        }

    }



    cout << counts;




    return 0;
}
