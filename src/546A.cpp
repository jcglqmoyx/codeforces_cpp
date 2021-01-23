#include <iostream>

using namespace std;

int main() {
    int k, n, w;
    cin >> k >> n >> w;
    int sum = w * (w + 1) / 2 * k;
    if (n >= sum) cout << 0 << endl;
    else cout << sum - n << endl;
    return 0;
}