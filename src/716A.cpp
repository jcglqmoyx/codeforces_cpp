#include <iostream>

using namespace std;

int main() {
    int n, c;
    cin >> n >> c;
    int count = n == 1 ? 1 : 0;
    int prev = -1;
    int cur;
    for (int i = 0; i < n; i++) {
        cin >> cur;
        if (prev != -1) {
            if (cur - prev > c) {
                count = 1;
            } else {
                count++;
            }
        } else {
            count = 1;
        }
        prev = cur;

    }
    cout << count << endl;
    return 0;
}