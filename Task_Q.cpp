#include <iostream>
using namespace std;

int main() {
  int a, b;
  string op;
  

  while (cin >> a >> op >> b) {
    if (op == "+"){
      cout << a + b << "\n";
    }
    else if(op == "-"){
      cout << a - b << "\n";
    }
    else if (op == "*"){
      cout << a * b << "\n";
    }
    else if (op == "/"){
      cout << a / b << "\n";
    }
  }
  
  return 0;
}
