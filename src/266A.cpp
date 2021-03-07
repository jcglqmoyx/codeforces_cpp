#include <iostream>

using namespace std;

int main() {
    int n;
    string stones;
    cin >> n;
    cin >> stones;
    int count = 0;
    for (int i = 0; i < n - 1; i++) {
        if (stones[i] == stones[i + 1]) {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}