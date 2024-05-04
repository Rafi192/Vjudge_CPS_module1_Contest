#include <iostream>

using namespace std;

int main() {
  int h, w;
  while (cin >> h >> w && h != 0 and w != 0) {
    for (int i = 1; i <= h; i++) {   // h
      for (int j = 1; j <= w; j++) { //
        // w
        if (i == 1 || i == h) {
          cout << "#";
        } else {
          if (j == 1 || j == w) {
            cout << "#";
          } else {
            cout << ".";
          }
        }
      }
      cout << "\n";
    }
    cout << "\n";
  }
  return 0;
}
