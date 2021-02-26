#include <iostream>

using namespace std;

int main() {
    string name;
    cin >> name;
    int map[26] = {0};
    for (char c : name) {
        map[c - 'a']++;
    }
    int count = 0;
    for (int i = 0; i < 26; i++) {
        if (map[i]) count++;
    }
    if (count & 1) cout << "IGNORE HIM!" << endl;
    else cout << "CHAT WITH HER!" << endl;
    return 0;
}