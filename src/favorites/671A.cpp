//#include <iostream>
//
//using namespace std;
//
//int main() {
//    int distance;
//    cin >> distance;
//    int moves[5] = {5, 4, 3, 2, 1};
//    int index = 0;
//    int count = 0;
//    while (distance) {
//        while (distance >= moves[index]) {
//            distance -= moves[index];
//            count++;
//        }
//        index++;
//    }
//    cout << count << endl;
//    return 0;
//}


#include <iostream>

using namespace std;

int main() {
    int x;
    cin >> x;
    cout << (x + 4) / 5 << '\n';
}