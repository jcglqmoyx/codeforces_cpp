#include <vector>
#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int base = 1;
        vector<int> nums;
        while (n) {
            int digit = n % 10;
            if (digit) {
                nums.push_back(digit * base);
            }
            base *= 10;
            n /= 10;
        }
        cout << nums.size() << endl;
        for (int num : nums) {
            cout << num << " ";
        }
        cout << endl;
    }
    return 0;
}