#include <iostream>

using namespace std;

int main() {




    int a;


    cin >> a;

    string s[a];


    for (int i = 0; i < a; i++) {

        cin >> s[i];
    }

    string temp;
    int k;
    for (int j  = 0; j < a; j++) {

        temp = s[j];
        k = temp.length();
        if (temp.length() <= 10) {
            cout << temp;
        } else {
            cout << temp[0] << temp.length() -2<< temp[k-1];

        }
        cout <<endl;

    }




    return 0;
}
