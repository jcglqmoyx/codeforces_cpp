#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    string commands;
    cin >> commands;
    int l = 0, r = 0;
    for (char c : commands) {
        if (c == 'L') l++;
        else r++;
    }
    cout << l + r + 1 << endl;
    return 0;
}