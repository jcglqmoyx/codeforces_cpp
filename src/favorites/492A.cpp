#include <iostream>

using namespace std;

int main() {
    int n, h = 0, cnt = 0;
    cin >> n;
    while (cnt <= n) {
        h++;
        cnt += h * (h + 1) / 2;
    }
    printf("%d\n", h - 1);
    return 0;
}
