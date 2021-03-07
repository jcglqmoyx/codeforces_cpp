#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> map(n + 1);
    int p, q;
    cin >> p;
    int level;
    while (p--) {
        cin >> level;
        map[level]++;
    }
    cin >> q;
    while (q--) {
        cin >> level;
        map[level]++;
    }
    bool flag = true;
    for (int i = 1; i <= n; i++) {
        if (map[i] == 0) {
            flag = false;
            break;
        }
    }
    if (flag) {
        cout << "I become the guy." << endl;
    } else {
        cout << "Oh, my keyboard!" << endl;
    }
    return 0;
}