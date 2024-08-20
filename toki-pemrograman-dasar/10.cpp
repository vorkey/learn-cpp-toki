#include <iostream>
using namespace std;

long long faktorial(int n) {
  if (n == 1) {
    return 1;
  } else {
    return faktorial(n - 1) * n;
  }
}

// cin untuk mengambil input dari terminal

int main() {
  int n, m;
  cin >> n >> m;

  cout << faktorial(n) + faktorial(m) << endl;
}