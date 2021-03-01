#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        cout << n << " ";
        for (int i = 1; i <= n - 2; i++) {
            cout << i << " ";
        }
        cout << n - 1 << endl;
    }
    return 0;
}