#include <iostream>

using namespace std;

int gcd(int a, int b) {
    return a % b ? gcd(b, a % b) : b;
}

int main() {
    int a, b, n;
    scanf("%d%d%d", &a, &b, &n);
    while (n) {
        n -= gcd(a, n);
        if (!n) {
            cout << "0" << endl;
            break;
        }
        n -= gcd(b, n);
        if (!n) cout << "1" << endl;
    }
    return 0;
}