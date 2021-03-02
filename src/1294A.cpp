#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, c, n;
        cin >> a >> b >> c >> n;
        int mx = max(a, max(b, c));
        n -= (mx - a) + (mx - b) + (mx - c);
        cout << (n >= 0 && n % 3 == 0 ? "YES" : "NO") << endl;
    }
    return 0;
}