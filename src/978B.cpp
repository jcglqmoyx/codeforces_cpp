#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int count = 0;
    int len = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == 'x') {
            if (len >= 2) count++;
            else len++;
        } else {
            len = 0;
        }
    }
    cout << count << endl;
    return 0;
}