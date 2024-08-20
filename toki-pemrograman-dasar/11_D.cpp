#include <iostream>

using namespace std;

int main() {
  int input;
  cin >> input;

  int r_terbaik = 1;
  int c_terbaik = input;
  int c;

  for (int r = 1; r < input; r++) {
    if (input % r == 0) {
      c = input / r;
      if (r <= c) {
        if ((c - r) < (c_terbaik - r_terbaik)) {
          r_terbaik = r;
          c_terbaik = c;
        }
      }
    }
  }
  cout << r_terbaik << " " << c_terbaik << endl;
}