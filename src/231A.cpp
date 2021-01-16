#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int a, b, c;
    int count = 0;
    for (int i = 0; i < n; i++) {
        cin >> a >> b >> c;
        int t = a + b + c;
        if (t >= 2) count++;
    }
    cout << count << endl;
    return 0;
}