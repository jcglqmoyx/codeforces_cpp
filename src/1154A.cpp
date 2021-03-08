#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> nums(4);
    for (int i = 0; i < 4; i++) {
        int num;
        cin >> num;
        nums[i] = num;
    }
    sort(nums.begin(), nums.end());
    int sum = nums[3];
    cout << sum - nums[0] << " " << sum - nums[1] << " " << sum - nums[2] << endl;
    return 0;
}