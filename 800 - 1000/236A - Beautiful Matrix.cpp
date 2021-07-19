
#include <iostream>
#include <math.h>

    using namespace std;

    int main() {


        int arr[5][5];
        int mark = 0;

        for (int i = 0; i < 5; i++) {
            for (int j = 0; j < 5; j++) {
                cin >> arr[i][j];
                if(arr[i][j] == 1) {
                    mark = abs(i-2 ) + abs(j -2); //biar ga minus

                }
            }
        }

        cout << mark;

        return 0;
    }
