#include <iostream>

using namespace std;

int main() {




    int a;


    cin >> a;

    int p, v ,t;
    int temp = 0;
    for (int  i = 0; i < a; i++) {

        cin >> p >> v >> t;

        if (p + v + t >= 2) {
            temp = temp + 1;
        }
    }


    cout << temp;




    return 0;
}
