#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int num;
    while (n--) {
        cin >> num;
        if (num == 1) {
            cout << "HARD" << endl;
            return 0;
        }
    }
    cout << "EASY" << endl;
    return 0;
}