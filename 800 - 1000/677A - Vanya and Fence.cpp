#include <iostream>

using namespace std;

int main() {

    int n, h, counts = 0, i;

    cin >> n >> h;
    while (n--) {

        cin >> i;
        if (i > h) {
            counts += 2;
        } else {
            counts++;
        }

    }

    cout << counts;



    return 0;
}
