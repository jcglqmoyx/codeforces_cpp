#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--)
    {
        int k;
        string s;
        cin >> k;
        cin >> s;
        int len = 0;
        int max_len = 0;
        for (int i = k - 1; i >= 0; i--) {
            if (s[i] == 'P') len++;
            else {
                max_len = max(max_len, len);
                len = 0;
            }
        }
        cout << max_len << endl;
    }
    return 0;
}