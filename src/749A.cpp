#include <iostream>

using namespace std;

int main() {
    int k;
    cin >> k;
    int twos = k / 2;
    cout << twos << endl;
    for (int i = 0; i < twos - 1; i++) {
        cout << 2 << " ";
    }
    cout << (k % 2 == 0 ? 2 : 3) << endl;
    return 0;
}