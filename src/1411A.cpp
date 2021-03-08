#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int count = 0;
        for (int i = n - 1; i >= max(0, n / 2 - 1); i--) {
            if (s[i] == ')') count++;
            else break;
        }
        cout << (count > n - count ? "YES" : "NO") << endl;
    }
    return 0;
}