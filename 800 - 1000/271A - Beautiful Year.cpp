#include <iostream>

using namespace std;

int main() {

    int n;
   cin >> n;

   int a, b, c, d;
   bool checker(true);

   do {
        n++;
        d = n % 10; //digit terakhir
        c = n/10 % 10; //digit ketiga
        b = n/100 % 10; //digit ketiga
        a = n/1000; //digit kesatu



        if (a != b && a != c && a != d && b != c && b != d && c != d){

            checker = false;
        }


   } while (checker);

   cout << n;

   return 0;
}
