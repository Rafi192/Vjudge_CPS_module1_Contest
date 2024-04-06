#include <iostream>
using namespace std;

int main() {
    int x, y;
    while (cin >> x >> y && (x != 0 || y != 0)) {
        if (x > y) {
            cout << y << " " << x << "\n";
        } else {
            cout << x << " " << y << "\n";
        }
    }
    return 0;
}
