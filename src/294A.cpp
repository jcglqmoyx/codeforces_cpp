#include <vector>
#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    int m;
    cin >> m;
    while (m--) {
        int x, y;
        cin >> x >> y;
        if (x > 1) {
            nums[x - 2] += y - 1;
        }
        if (x < n) {
            nums[x] += nums[x - 1] - y;
        }
        nums[x - 1] = 0;
    }
    for (int num : nums) cout << num << endl;
    return 0;
}