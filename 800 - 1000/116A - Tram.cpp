#include <iostream>

using namespace std;


int main() {

    int n;
    cin >> n;
    int a[n], b[n], maxx = 0, sub = 0, sum = 0;

    for (int i = 0; i < n; i++) {


        cin >> a[i] >> b[i];
        if (i > 0) {
            sub = sub - a[i] ;
            sum = sub + b[i];
            sub = sum;

        } else {

            sub = b[i] - a[i];
            sum = sub;
        }

        if ( sum > maxx) {
            maxx = sum;
        }

    }

    cout << maxx;

    return 0;
}
