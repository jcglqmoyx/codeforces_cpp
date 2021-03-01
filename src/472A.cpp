#include <iostream>
#include <tgmath.h>

using namespace std;

bool is_composite(int number) {
    for (int i = 2; i <= sqrt(number); i++) {
        if (number % i == 0) return true;
    }
    return false;
}

int main() {
    int n;
    cin >> n;
    for (int i = 2; i <= n / 2; i++) {
        if (is_composite(i) && is_composite(n - i)) {
            cout << i << " " << n - i << endl;
            break;
        }
    }
    return 0;
}