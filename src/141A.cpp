#include <iostream>

using namespace std;

int main() {
    string guest, host, letters;
    cin >> guest >> host >> letters;
    int count[26] = {0};
    for (char c : guest) count[c - 'A']++;
    for (char c : host) count[c - 'A']++;
    for (char c : letters) count[c - 'A']--;
    for (int i = 0; i < 26; i++) {
        if (count[i]) {
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
    return 0;
}