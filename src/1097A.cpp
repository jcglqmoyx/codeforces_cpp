#include <iostream>
#include <string>

using namespace std;

int main() {
    string card;
    cin >> card;
    for (int i = 0; i < 5; i++) {
        string play;
        cin >> play;
        if (play[0] == card[0] || play[1] == card[1]) {
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;
    return 0;
}