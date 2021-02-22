#include <iostream>

using namespace std;

int main() {
    int len;
    string number;
    cin >> len >> number;
    int left = 0, right = 0;
    int n = number.length();
    for (int i = 0; i < n / 2; i++) {
        if (number[i] == '4') {
            left += 4;
        } else if (number[i] == '7') {
            left += 7;
        } else {
            cout << "NO" << endl;
            return 0;
        }
        int j = i + n / 2;
        if (number[j] == '4') {
            right += 4;
        } else if (number[j] == '7') {
            right += 7;
        } else {
            cout << "NO" << endl;
            return 0;
        }
    }
    if (left == right) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}