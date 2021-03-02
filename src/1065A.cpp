#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long s, a, b, c;
        cin >> s >> a >> b >> c;
        long long count = s / c;
        count += count / a * b;
        cout << count << endl;
    }
    return 0;
}