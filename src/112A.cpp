#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    string str1, str2;
    cin >> str1 >> str2;
    transform(str1.begin(), str1.end(), str1.begin(), ::toupper);
    transform(str2.begin(), str2.end(), str2.begin(), ::toupper);
    if (str1 == str2) cout << 0 << endl;
    else if (str1 < str2) cout << -1 << endl;
    else cout << 1 << endl;
    return 0;
}