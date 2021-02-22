#include <iostream>

using namespace std;

int main() {
    int len, number;
    cin >> len >> number;
    int left = 0, right = 0;
    for (int i = 0; i < len / 2; i++) {
        int digit = number % 10;
        if (digit != 4 && digit != 7) {
            cout << "NO" << endl;
            return 0;
        }
        left += digit;
        number /= 10;
    }
    for (int i = 0; i < len / 2; i++) {
        int digit = number % 10;
        if (digit != 4 && digit != 7) {
            cout << "NO" << endl;
            return 0;
        }
        right += digit;
        number /= 10;
    }
    if (left == right) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}