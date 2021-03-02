#include <iostream>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    int total = 240 - k;
    int count = 0;
    for (int i = 1; i <= n; i++) {
        if (total >= 5 * i) {
            total -= 5 * i;
            count++;
        } else {
            break;
        }
    }
    cout << count << endl;
    return 0;
}