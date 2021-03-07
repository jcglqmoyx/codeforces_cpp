#include <iostream>
#include <unordered_set>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        unordered_set<int> set;
        while (n--) {
            int a;
            cin >> a;
            set.insert(a);
        }
        cout << set.size() << endl;
    }
    return 0;
}