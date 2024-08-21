#include <iostream>
#include <limits>

using namespace std;

int main() {
  int size, c, min = numeric_limits<int>::max(),
               max = numeric_limits<int>::min();
  cin >> size;

  for (int i = 0; i < size; i++) {
    cin >> c;
    if (c > max) {
      max = c;
    }
    if (c < min) {
      min = c;
    }
  }

  cout << max << " " << min << endl;
}