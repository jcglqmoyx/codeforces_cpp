#include <iostream>
#include <queue>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    priority_queue<int, vector<int>, greater<int>> pq;
    while (n--) {
        int y;
        cin >> y;
        pq.push(y);
    }
    int cnt = 0;
    while (pq.size() >= 3) {
        int a = pq.top();
        pq.pop();
        int b = pq.top();
        pq.pop();
        int c = pq.top();
        pq.pop();
        if (a <= 5 - k && b <= 5 - k && c <= 5 - k) {
            cnt++;
        } else {
            break;
        }
    }
    cout << cnt << endl;
    return 0;
}