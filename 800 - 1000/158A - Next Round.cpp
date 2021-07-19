#include <iostream>

    using namespace std;

    int main() {




        int n, k;

        cin >> n >> k;

        int counts = 0;
        int arr[n];

        for (int i = 0; i < n; i++ ) {


           cin >> arr[i];
            if (i+1 <= k) {
                if(arr[i] > 0) {
                    counts++;
                } else if (arr[i] == 0){
                    cout << i;
                    return 0;

                } else if(counts == 0) {
                    break;
                }
            } else if (i+1 > k) {
                if(arr[i] >= arr[i-1]) {
                    counts++;
                } else if (arr[i] < arr[i-1]) {
                    break;
                }
            }



        }
        cout << counts;


        return 0;
    }
