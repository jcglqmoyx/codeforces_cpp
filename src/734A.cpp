#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int a = 0, d = 0;
    for (char c : s) {
        switch (c) {
            case 'A':
                a++;
                break;
            case 'D':
                d++;
                break;
            default:
                break;
        }
    }
    if (a > d) cout << "Anton" << endl;
    else if (d > a) cout << "Danik" << endl;
    else cout << "Friendship" << endl;
    return 0;
}