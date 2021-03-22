#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int sum = 0;
        bool has_odd = false;
        bool has_even = false;
        while (n--) {
            int a;
            cin >> a;
            sum += a;
            if (a & 1) has_odd = true;
            else has_even = true;
        }
        if (sum & 1 || has_odd && has_even) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}