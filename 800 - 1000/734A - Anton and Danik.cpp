#include <iostream>

using namespace std;

int main() {

   int n, ca = 0, cd = 0;
   cin >> n;

   char s;

   while (n--) {
    cin >> s;
    if (s == 'A') {
        ca++;
    } else if (s == 'D') {
        cd++;
    }

   }

   if (ca == cd) {
    cout << "Friendship";
   } else if (ca > cd) {
    cout << "Anton";
   } else {
    cout << "Danik";
   }
   cout << endl;
    return 0;
}
