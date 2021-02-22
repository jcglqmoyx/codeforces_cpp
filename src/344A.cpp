#include <iostream>

using namespace std;

int main() {
    int n, number = 0;
    cin >> n;
    char prev = '2';
    string magnet;
    while (n--) {
        cin >> magnet;
        if (magnet[0] != prev) {
            number++;
        }
        prev = magnet[0];
    }
    cout << number << endl;
    return 0;
}