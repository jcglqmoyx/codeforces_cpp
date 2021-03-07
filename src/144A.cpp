#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int mn = 101, mx = 0;
    int min_idx, max_idx;
    for (int i = 0; i < n; i++) {
        int height;
        cin >> height;
        if (height <= mn) {
            mn = height;
            min_idx = i;
        }
        if (height > mx) {
            mx = height;
            max_idx = i;
        }
    }
    if (max_idx > min_idx) {
        cout << max_idx + n - min_idx - 2 << endl;
    } else {
        cout << max_idx + n - min_idx - 1 << endl;
    }
    return 0;
}