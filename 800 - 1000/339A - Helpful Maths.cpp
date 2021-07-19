
#include <iostream>


using namespace std;

int main() {


        string s;

        cin >> s;

        char temp;

        bool swapped;
        if (s[1] != '+') {
                cout << s;
                return 0;
        } else {

            do {
                swapped = false;

                for (int i = 0; i < s.length()-1; i+=2) {


                    if (int(s[i]) > int(s[i+2]) ) {
                        swap(s[i] , s[i+2]);
                        swapped = true;
                    }

                }


            } while (swapped);
        }

        cout << s;
        return 0;
}
