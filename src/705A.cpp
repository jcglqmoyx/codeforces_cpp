#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        if (i < n - 1) {
            if (i & 1) {
                cout << "I love that";
            } else {
                cout << "I hate that";
            }
        } else {
            if (i & 1) {
                cout << "I love it";
            } else {
                cout << "I hate it";
            }
        }
        if (i < n - 1) {
            cout << " ";
        }
    }
    cout << endl;
    return 0;
}