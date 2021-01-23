#include <vector>
#include <string>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    string s;
    vector<char> nums;
    cin >> s;
    for (char c : s) if (isdigit(c)) nums.push_back(c);
    sort(nums.begin(), nums.end());
    if (nums.size() == 1) cout << nums[0] << endl;
    else {
        for (int i = 0; i < nums.size() - 1; i++) cout << nums[i] << '+';
        cout << nums.back() << endl;
    }
    return 0;
}