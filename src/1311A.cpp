#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;
        if (a == b) {
            cout << 0 << endl;
            continue;
        }
        int diff = abs(a - b);
        if (a < b) {
            if (diff & 1) cout << 1 << endl;
            else cout << 2 << endl;
        } else {
            if (diff & 1) cout << 2 << endl;
            else cout << 1 << endl;
        }
    }
    return 0;
}