#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> points(n);
    for (int i = 0; i < n; i++) {
        cin >> points[i];
    }
    int point = points[k - 1];
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (points[i] && points[i] >= point) count++;
        else break;
    }
    cout << count << endl;
    return 0;
}