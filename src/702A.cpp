#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int prev = 0;
    int max_len = 1;
    int len = 1;
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        if (prev != 0) {
            if (num > prev) {
                len++;
                if (i == n - 1) {
                    max_len = max(max_len, len);
                }
            } else {
                max_len = max(max_len, len);
                len = 1;
            }
        }
        prev = num;
    }
    cout << max_len << endl;
    return 0;
}