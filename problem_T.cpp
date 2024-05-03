// Drawing a rectangle
// Task T

#include <iostream>

using namespace std;

int main() {
  int h, w;
  while (cin >> h >> w && h != 0 || w != 0) {
    //int area = h * w;
    // cout<<"Hello world"<<"\n";
    for (int i = 0; i < h; i++) { //h
      for (int j = 1; j <= w; j++) {//w
        cout << "#";
      }
      cout << "\n";
    }

    return 0;
  }
}
