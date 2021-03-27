#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x, y;
        cin >> x >> y;
        if (x < y) swap(x, y);
        int diff = x - y;
        if (diff <= 1) {
            cout << (x + y) << endl;
        } else {
            cout << (x * 2 - 1) << endl;
        }
    }
    return 0;
}