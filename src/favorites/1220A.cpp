#include <iostream>

using namespace std;

int main() {
    int n;
    string seq;
    cin >> n >> seq;
    int count_z = 0, count_e = 0, count_r = 0, count_o = 0, count_n = 0;
    for (char c : seq) {
        switch (c) {
            case 'z':
                count_z++;
                break;
            case 'e':
                count_e++;
                break;
            case 'r':
                count_r++;
                break;
            case 'o':
                count_o++;
                break;
            case 'n':
                count_n++;
                break;
            default:
                break;
        }
    }
    int one = min(count_o, min(count_n, count_e));
    count_o -= one;
    count_e -= one;
    int zero = min(count_z, count_e);
    zero = min(zero, min(count_r, count_o));
    for (int i = 0; i < one - 1; i++) {
        cout << 1 << " ";
    }
    if (zero) {
        if (one) {
            cout << 1 << " ";
        }
        for (int i = 0; i < zero - 1; i++) {
            cout << 0 << " ";
        }
        cout << 0 << endl;
    } else {
        cout << 1 << endl;
    }
    return 0;
}