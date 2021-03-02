#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int p = 0, q = 0;
    for (int i = 0; i < n; i++) {
        int m, c;
        cin >> m >> c;
        if (m > c) p++;
        else if (m < c) q++;
    }
    if (p > q) cout << "Mishka" << endl;
    else if (p < q) cout << "Chris" << endl;
    else cout << "Friendship is magic!^^" << endl;
    return 0;
}