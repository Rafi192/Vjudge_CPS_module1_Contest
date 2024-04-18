#include <iostream>
using namespace std;

pair<int, int> distribute_problems(int n) {
    if (n <= 10) {
        return make_pair(0, n);
    } else {
        return make_pair(10, n - 10);
    }
}

int main() {
    int T;
    cin >> T; // Number of test cases
    for (int i = 0; i < T; ++i) {
        int n;
        cin >> n; // Total number of problems
        // Output
        pair<int, int> result = distribute_problems(n);
        cout << result.first << " " << result.second << endl;
    }
    return 0;
}
