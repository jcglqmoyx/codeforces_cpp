#include <iostream>

using namespace std;

int main() {
    int row = 0;
    int num;
    while (row < 5) {
        for (int col = 0; col < 5; col++) {
            cin >> num;
            if (num) {
                cout << abs(row - 2) + abs(col - 2) << endl;
                break;
            }
        }
        row++;
    }
    return 0;
}