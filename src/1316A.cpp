#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        int total = 0;
        for (int i = 0; i < n; i++) {
            int score;
            cin >> score;
            total += score;
        }
        int max_score = min(total, m);
        cout << max_score << endl;
    }
    return 0;
}