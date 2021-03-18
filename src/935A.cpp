#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int count = 0;
    for (int i = 1; i <= n / 2; i++) {
        int j = n - i;
        if (j % i == 0) count++;
    }
    cout << count << endl;
    return 0;
}