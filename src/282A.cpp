#include <string>
#include <string>
#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int value = 0;
    string statement;
    while (n--) {
        cin >> statement;
        if (statement == "X++" || statement == "++X") value++;
        else value--;
    }
    cout << value << endl;
    return 0;
}