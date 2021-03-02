#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int temp = n;
        int count[26] = {0};
        while (n--) {
            string word;
            cin >> word;
            for (char c : word) {
                count[c - 'a']++;
            }
        }
        bool flag = true;
        for (int i = 0; i < 26; i++) {
            if (count[i] % temp) {
                flag = false;
                break;
            }
        }
        if (flag) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}