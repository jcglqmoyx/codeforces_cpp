#include <iostream>

using namespace std;

int main() {
    string word;
    cin >> word;
    cout << (char) toupper(word.front()) << word.substr(1, word.length() - 1);
    return 0;
}