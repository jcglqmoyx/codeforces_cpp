#include <iostream>

using namespace std;

int total_digits(int num) {
    int digit = 0;
    while (num) {
        digit++;
        num /= 10;
    }
    return digit;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x;
        cin >> x;
        int digits = 0;
        for (int i = 1; i <= 9; i++) {
            if (i < x % 10) {
                digits += 10;
            } else if (i == x % 10) {
                int j = i;
                while (j <= x) {
                    digits += total_digits(j);
                    j = 10 * j + i;
                }
            } else {
                break;
            }
        }
        cout << digits << endl;
    }
    return 0;
}