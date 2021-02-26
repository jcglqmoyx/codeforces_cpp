#include <iostream>

using namespace std;

int main() {
    string input;
    while (true) {
        char c = getchar();
        input.push_back(c);
        if (c == '}') break;
    }
    int count = 0;
    int map[26] = {0};
    for (int i = 1; i < input.length(); i++) {
        if (isalpha(input[i])) {
            map[input[i] - 'a']++;
        }
    }
    for (int i = 0; i < 26; i++) {
        if (map[i]) count++;
    }
    cout << count << endl;
    return 0;
}