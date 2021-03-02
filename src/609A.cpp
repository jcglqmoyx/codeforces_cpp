#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, m;
    cin >> n;
    cin >> m;
    vector<int> usbs;
    usbs.reserve(n);
    for (int i = 0; i < n; i++) {
        int usb;
        cin >> usb;
        usbs.push_back(usb);
    }
    sort(usbs.begin(), usbs.end(), greater<int>());
    int count = 0;
    int index = 0;
    while (m > 0) {
        count++;
        m -= usbs[index++];
    }
    cout << count << endl;
    return 0;
}