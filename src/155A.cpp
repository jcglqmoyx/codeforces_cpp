#include  <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int point;
    cin >> point;
    int mn = point, mx = point;
    int count = 0;
    while (n-- > 1) {
        cin >> point;
        if (point > mx) {
            mx = point;
            count++;
        } else if (point < mn) {
            mn = point;
            count++;
        }
    }
    cout << count << endl;
    return 0;
}