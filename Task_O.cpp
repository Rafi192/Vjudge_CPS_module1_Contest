#include <iostream>

using namespace std;

int main(){
  int t;
  cin>>t;
  int i=1;
  while (t--){
    int a,b;
    cin>> a>>b;
    int total;
    total = a+b;
    cout<<"Case "<<i<<": "<<total<<"\n";
    total=0;
    i++;
  }
  return 0;
}