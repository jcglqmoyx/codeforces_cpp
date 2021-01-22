#include <string>
#include <iostream>

using namespace std;

int main() {
    string word;
    cin >> word;
    int count_lower = 0;
    for (char c : word) if (islower(c)) count_lower++;
    string res;
    res.reserve(word.length());
    if (count_lower >= (word.size() + 1) / 2) for (char c : word) res += tolower(c);
    else for (char c : word) res += toupper(c);
    cout << res << endl;
    return 0;
}