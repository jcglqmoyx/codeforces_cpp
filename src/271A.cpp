#include <iostream>

using namespace std;

int main() {
    int year;
    cin >> year;
    for (int y = year + 1;; y++) {
        int count[10] = {0};
        bool flag = true;
        int temp = y;
        while (temp) {
            int digit = temp % 10;
            if (count[digit]) {
                flag = false;
                break;
            }
            count[digit]++;
            temp /= 10;
        }
        if (flag) {
            cout << y << endl;
            break;
        }
    }
    return 0;
}