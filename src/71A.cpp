#include <iostream>

using namespace std;

string handle(string &word) {
    return word.length() <= 10 ? word : word.front() + to_string(word.length() - 2) + word.back();
}

int main() {
    int n;
    cin >> n;
    string word;
    for (int i = 0; i < n; i++) {
        cin >> word;
        cout << handle(word) << endl;
    }
    return 0;
}