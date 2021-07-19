#include <iostream>

using namespace std;

int main() {

   string s, t;
   cin >> s;
   cin >> t;
   int i = 0, j = t.length() - 1;
   do {

        if (s[i] != t[j]) {
            cout << "NO";
            return 0;
        }
        i++;
        j--;
   } while (i < s.length());

   cout << "YES" <<endl;


    return 0;
}
