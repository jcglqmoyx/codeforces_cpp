#include <iostream>

using namespace std;

int main() {
    string num1, num2;
    cin >> num1 >> num2;
    int len = num1.length();
    for (int i = 0; i < len; i++) {
        char c = num1[i] == num2[i] ? '0' : '1';
        cout << c;
    }
    cout << endl;
    return 0;
}