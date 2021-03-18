#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x, y, a, b;
        cin >> x >> y >> a >> b;
        int result = (y - x) % (a + b) ? -1 : (y - x) / (a + b);
        cout << result << endl;
    }
    return 0;
}