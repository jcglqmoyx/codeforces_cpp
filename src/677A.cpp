#include <iostream>

using namespace std;

int main() {
    int n, h;
    cin >> n >> h;
    int width = 0;
    int height;
    while (n--) {
        cin >> height;
        if (height <= h) width++;
        else width += 2;
    }
    cout << width << endl;
    return 0;
}