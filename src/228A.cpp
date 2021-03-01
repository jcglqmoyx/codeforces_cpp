#include <iostream>
#include <unordered_set>

using namespace std;

int main() {
    int n = 4;
    int num;
    unordered_set<int> set;
    while (n--) {
        cin >> num;
        set.insert(num);
    }
    cout << 4 - set.size() << endl;
    return 0;
}