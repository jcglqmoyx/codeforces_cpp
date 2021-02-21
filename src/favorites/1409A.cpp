#include <iostream>

using namespace std;

//int main() {
//    int t;
//    cin >> t;
//    int a, b;
//    for (int i = 0; i < t; i++) {
//        cin >> a >> b;
//        if (a > b) swap(a, b);
//        int diff = b - a;
//        int res = diff / 10;
//        if (res * 10 + a == b) cout << res << endl;
//        else cout << res + 1 << endl;
//    }
//    return 0;
//}

int main() {
    int t;
    cin >> t;
    int a, b;
    while (t--) {
        cin >> a >> b;
        cout << (abs(a - b) + 9) / 10 << endl;
    }
    return 0;
}