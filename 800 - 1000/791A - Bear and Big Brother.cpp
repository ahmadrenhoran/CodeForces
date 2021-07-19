
#include <iostream>


using namespace std;

int main()
{
    int a, b; //limak dan bob
    int counts = 0;

    cin >> a >> b;

    do {

        a = a * 3;
        b = b * 2;
        counts++;
    } while (a <= b);

        cout << counts;
    return 0;
}
