#include <iostream>

using namespace std;

int main() {
    int d1, d2, d3;
    cin >> d1 >> d2 >> d3;
    int sum = d1 + d2 + d3;
    int mx = 0;
    mx = max(d1, max(d2, d3));
    cout << min((sum - mx) * 2, sum) << endl;
    return 0;
}