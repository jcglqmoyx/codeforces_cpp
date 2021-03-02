#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long a, b, k;
        cin >> a >> b >> k;
        long long position = k / 2 * (a - b);
        if (k & 1) {
            position += a;
        }
        cout << position << endl;
    }
    return 0;
}