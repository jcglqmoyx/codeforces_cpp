#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int capacity = 0, cur = 0;
    int off, on;
    while (n--) {
        cin >> off >> on;
        cur += on - off;
        capacity = max(capacity, cur);
    }
    cout << capacity << endl;
    return 0;
}