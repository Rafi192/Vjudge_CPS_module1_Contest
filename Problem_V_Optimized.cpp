// Task V
#include <iostream>

using namespace std;

int main() {

  int H, W;
  while (cin >> H && cin >> W && H != 0 and W != 0) {

    for (int i = 1; i <= H; i++) {
      for (int j = 1; j <= W; j++) {

        if (i %2 !=0 && j %2 !=0){
          cout<<"#";
        }
        else if(i %2 ==0 && j %2 ==0){
          cout<<"#";
        }
        else{
          cout<<".";
        }
        
        /*
        if ( i %2 !=0 ){
          if(j%2 !=0){
          cout<<"#";
          }
          else{
            cout<<".";
          }
          
        }
        else if(i% 2 ==0){
          if (j %2 ==0){
            cout<<"#";
          }
            
          else{
            cout<<".";
          }
        }
        */

        
        }
      
      cout << "\n";
    }
    cout << "\n";
  }

  return 0;
}
