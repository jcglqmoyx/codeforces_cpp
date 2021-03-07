#include <vector>
#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<pair<int, int>> uniforms(n);
    for (int i = 0; i < n; i++) {
        int h, a;
        cin >> h >> a;
        uniforms[i] = {h, a};
    }
    int count = 0;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (uniforms[i].second == uniforms[j].first) count++;
            if (uniforms[i].first == uniforms[j].second) count++;
        }
    }
    cout << count << endl;
    return 0;
}