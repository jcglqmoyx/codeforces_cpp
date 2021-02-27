#include <iostream>

using namespace std;

int main() {
    int n, t;
    cin >> n >> t;
    string queue;
    cin >> queue;
    while (t--) {
        for (int i = 0; i < n; i++) {
            if (queue[i] == 'B') {
                if (i < n - 1) {
                    swap(queue[i], queue[i + 1]);
                }
                if (queue[i] == 'G') i++;
            }
        }
    }
    cout << queue << endl;
    return 0;
}