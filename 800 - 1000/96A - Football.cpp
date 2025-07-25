#include <iostream>
#include <string>

using namespace std;

int main() {
    string players;
    char currentTeam;
    int counting7 = 1;

    cin >> players;
    currentTeam = players.at(0);

    for (int i = 0; i < players.length(); i++) {
        if (players.at(i) == currentTeam) {
            counting7++;
            if (counting7 == 7) break;
        } else {
            counting7 = 1;
            currentTeam = players.at(i);
        }
    }
    if (counting7 == 7) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}
