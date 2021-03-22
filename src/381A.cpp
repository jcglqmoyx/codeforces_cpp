#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> cards(n);
    for (int i = 0; i < n; i++) {
        int card;
        cin >> card;
        cards[i] = card;
    }
    int s = 0, d = 0;
    int low = 0, high = n - 1;
    while (low <= high) {
        if (cards[low] < cards[high]) {
            s += cards[high--];
        } else {
            s += cards[low++];
        }
        if (low > high) break;
        if (cards[low] < cards[high]) {
            d += cards[high--];
        } else {
            d += cards[low++];
        }
    }
    cout << s << " " << d << endl;
    return 0;
}