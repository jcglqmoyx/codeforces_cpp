#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int left = 0, right = 0;
        for (int i = 1; i < n / 2; i++) {
            left += 1 << i;
        }
        left += 1 << n;
        for (int i = n / 2; i <= n - 1; i++) {
            right += 1 << i;
        }
        cout << abs(left - right) << endl;
    }
    return 0;
}