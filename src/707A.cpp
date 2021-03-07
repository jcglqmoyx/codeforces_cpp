#include <unordered_map>
#include <iostream>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    unordered_map<char, bool> map;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            char pixel;
            cin >> pixel;
            map[pixel] = true;
        }
    }
    if (map['C'] || map['M'] || map['Y']) cout << "#Color" << endl;
    else cout << "#Black&White" << endl;
    return 0;
}