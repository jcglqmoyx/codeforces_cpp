#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int mx = 0;
    int money;
    int sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> money;
        sum += money;
        mx = max(mx, money);
    }
    cout << mx * n - sum << endl;
    return 0;
}