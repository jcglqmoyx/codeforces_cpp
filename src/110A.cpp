#include <iostream>

using namespace std;

int main() {
    long long n;
    cin >> n;
    int count = 0;
    while (n) {
        count += n % 10 == 4 || n % 10 == 7;
        n /= 10;
    }
    if (count == 0) {
        cout << "NO" << endl;
        return 0;
    }
    while (count) {
        int digit = count % 10;
        if (digit != 4 && digit != 7) {
            cout << "NO" << endl;
            return 0;
        }
        count /= 10;
    }
    cout << "YES" << endl;
    return 0;
}