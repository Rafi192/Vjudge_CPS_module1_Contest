#include <iostream>

using namespace std;

int main(){
  int x, i=1;
  while (cin>>x && x!=0 ){
    cout<< "Case "<<i<<": "<<x<<"\n";
    i++;
  }
  return 0;
}