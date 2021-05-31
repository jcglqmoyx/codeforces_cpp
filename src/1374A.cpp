#include <iostream>

using namespace std;

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int x, y, n;
        scanf("%d%d%d", &x, &y, &n);
        int i = (n - y) / x;
        while (y + i * x <= n) i++;
        cout << y + (i - 1) * x << endl;
    }
    return 0;
}