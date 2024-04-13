#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;
  long int arr[n];
  
  // Initialize min and max with appropriate values
  long int min = 1000000, max = -1000000;
  
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
    // Update min and max as you input the numbers
    if (arr[i] < min) {
      min = arr[i];
    }
    if (arr[i] > max) {
      max = arr[i];
    }
  }
  
  // Calculate the sum of the sequence
  long long sum = 0;
  for (int j = 0; j < n; j++) {
    sum += arr[j];
  }
  
  cout << min << " " << max << " " << sum << "\n";
  return 0;
}
