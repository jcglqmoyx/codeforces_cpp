#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    string S, t;
    cin >> S >> t;
    reverse(S.begin(), S.end());
    cout << (S == t ? "YES" : "NO") << endl;
    return 0;
}