#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int p, t;
    int count = 0;
    while (n--) {
        cin >> p >> t;
        if (t > p + 1) count++;
    }
    cout << count << endl;
    return 0;
}