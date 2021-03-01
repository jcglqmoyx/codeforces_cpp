#include <iostream>

using namespace std;

int main() {
    int n;
    string word;
    cin >> n >> word;
    bool count[26] = {false};
    for (int i = 0; i < n; i++) {
        count[tolower(word[i]) - 'a'] = true;
    }
    for (bool e : count) {
        if (e == 0) {
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
    return 0;
}