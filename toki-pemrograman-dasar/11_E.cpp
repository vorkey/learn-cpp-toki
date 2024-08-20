#include <cmath>
#include <iostream>

using namespace std;

int main() {
  long long input;
  cin >> input;

  long long r_terbaik = 1;
  long long c_terbaik = input;
  long long c;

  for (long long r = 1; r * r <= input; r++) {
    if (input % r == 0) {
      c = input / r;
      if (r <= c) {
        if ((c - r) < (c_terbaik - r_terbaik)) {
          r_terbaik = r;
          c_terbaik = c;
        }
      }
    }
    if (r_terbaik >= input / 2) {
      break;
    }
  }
  cout << r_terbaik << " " << c_terbaik << endl;
}