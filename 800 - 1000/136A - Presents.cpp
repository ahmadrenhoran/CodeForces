#include <iostream>

using namespace std;

int main() {

    int n;

    cin >> n;

    int fr[n+1], pre;

    for (int i = 1; i <= n; i++) {
        cin >> pre;
        fr[pre] = i;
    }


    for (int i = 1; i <= n; i++) {

        cout << fr[i] << " ";
    }



    return 0;
}
