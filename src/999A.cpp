#include <iostream>

using namespace std;

int main() {
    int n, k;
    int left = 0, right = 0;
    cin >> n >> k;
    while (n--) {
        int difficulty;
        cin >> difficulty;
        if (difficulty <= k) left++;
        else {
            while (n--) {
                cin >> difficulty;
                if (difficulty <= k) right++;
                else {
                    right = 0;
                }
            }
            break;
        }
    }
    int count = left + right;
    cout << count << endl;
    return 0;
}