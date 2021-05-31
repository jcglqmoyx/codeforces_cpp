#include <iostream>
#include <cstring>

using namespace std;

const int N = 105;

int a[N], cnt[N];

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        memset(cnt, 0, sizeof cnt);
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
            cnt[a[i]]++;
        }
        for (int i = 1; i <= n; i++) {
            if (cnt[a[i]] == 1) {
                cout << i << endl;
                break;
            }
        }
    }
    return 0;
}