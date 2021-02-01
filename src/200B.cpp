#include <iostream>

using namespace std;

int main() {
    double sum = 0.0;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int volume_fraction;
        cin >> volume_fraction;
        sum += volume_fraction;
    }
    double res = sum / n;
    cout << res << endl;
}