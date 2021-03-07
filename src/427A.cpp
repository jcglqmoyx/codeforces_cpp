#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int manpower = 0;
    int untreated = 0;
    while (n--) {
        int num;
        cin >> num;
        if (num > 0) manpower += num;
        else {
            if (manpower == 0) untreated++;
            if (manpower) manpower--;
        }
    }
    cout << untreated << endl;
    return 0;
}