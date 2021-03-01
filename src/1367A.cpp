#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string a, b;
        cin >> b;
        if (b.length() == 2) cout << b << endl;
        else {
            a.push_back(b[0]);
            for (int i = 1; i < b.length() - 1; i += 2) {
                a.push_back(b[i]);
            }
            a.push_back(b.back());
            cout << a << endl;
        }
    }
    return 0;
}