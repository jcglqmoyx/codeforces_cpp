#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> map(n + 1);
    for (int i = 0; i < n; i++) {
        int p;
        cin >> p;
        map[p] = i + 1;
    }
    for (int i = 1; i <= n; i++) {
        cout << map[i] << " ";
    }
    return 0;
}