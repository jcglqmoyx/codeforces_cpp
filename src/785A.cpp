#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int count = 0;
    while (n--) {
        string word;
        cin >> word;
        if (word == "Tetrahedron") count += 4;
        else if (word == "Cube") count += 6;
        else if (word == "Octahedron") count += 8;
        else if (word == "Dodecahedron") count += 12;
        else if (word == "Icosahedron") count += 20;
    }
    cout << count << endl;
    return 0;
}