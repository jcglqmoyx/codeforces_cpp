#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int w, h, n;
        cin >> w >> h >> n;
        int cnt = 1;
        int s = w * h;
        while (s % 2 == 0) {
            cnt <<= 1;
            s >>= 1;
        }
        cout << (cnt >= n ? "YES" : "NO") << endl;
    }
    return 0;
}