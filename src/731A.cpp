#include <iostream>

using namespace std;

int main() {
    string exhibit;
    cin >> exhibit;
    char cur = 'a';
    int rotations = 0;
    for (char c : exhibit) {
        rotations += min((c - cur + 26) % 26, (cur - c + 26) % 26);
        cur = c;
    }
    cout << rotations << endl;
    return 0;
}