#include <iostream>

using namespace std;

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n, m;
        scanf("%d%d", &n, &m);
        int map[1001] = {0};
        int num;
        while (n--) {
            scanf("%d", &num);
            map[num]++;
        }
        bool flag = false;
        int res;
        while (m--) {
            scanf("%d", &num);
            if (flag) continue;
            if (map[num]) {
                flag = true;
                res = num;
            }
        }
        if (flag) {
            cout << "YES\n" << 1 << ' ' << res << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}