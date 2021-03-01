#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, t;
    cin >> n;
    vector<int> t1, t2, t3;
    for (int i = 1; i <= n; i++) {
        cin >> t;
        switch (t) {
            case 1:
                t1.push_back(i);
                break;
            case 2:
                t2.push_back(i);
                break;
            case 3:
                t3.push_back(i);
                break;
            default:
                break;
        }
    }
    int min_team = min(t1.size(), min(t2.size(), t3.size()));
    if (min_team == 0) {
        cout << 0 << endl;
    } else {
        cout << min_team << endl;
        while (!t1.empty() && !t2.empty() && !t3.empty()) {
            cout << t1.back() << " " << t2.back() << " " << t3.back() << endl;
            t1.pop_back();
            t2.pop_back();
            t3.pop_back();
        }
    }
    return 0;
}