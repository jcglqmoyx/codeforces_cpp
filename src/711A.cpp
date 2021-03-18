#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<string> rows;
    rows.reserve(n);
    bool flag = false;
    while (n--) {
        string row;
        cin >> row;
        if (!flag && row.substr(0, 2) == "OO") {
            rows.push_back("++" + row.substr(2));
            flag = true;
        } else if (!flag && row.substr(3) == "OO") {
            rows.push_back(row.substr(0, 3) + "++");
            flag = true;
        } else {
            rows.push_back(row);
        }
    }
    if (flag) {
        cout << "YES" << endl;
        for (string &row : rows) cout << row << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}