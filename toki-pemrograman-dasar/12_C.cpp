#include <iostream>

using namespace std;

int main() {
  int N, ch = 0;
  cin >> N;

  for (int j = 0; j <= N; j++) {
    for (int i = j; i > 0; i--) {
      cout << ch;
      ch++;
      if (ch == 10) {
        ch = 0;
      }
    }
    cout << endl;
  }
}