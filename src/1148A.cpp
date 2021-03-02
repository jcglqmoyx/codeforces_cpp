#include <iostream>

using namespace std;

int main() {
    long long a, b, c;
    cin >> a >> b >> c;
    long long mn = min(a, b);
    long long diff = abs(a - b);
    cout << (diff ? mn * 2 + c * 2 + 1 : mn * 2 + c * 2) << endl;
    return 0;
}