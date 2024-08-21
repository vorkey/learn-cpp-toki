#include <cstdlib>
#include <iostream>

using namespace std;

int mutl(int a, int b, int x) {
  // cout << "wtf result " << abs((a * x) + b) << endl;
  return abs((a * x) + b);
}

int main() {
  int A, B, K, x;
  cin >> A >> B >> K >> x;

  int result = mutl(A, B, x);

  for (int i = K - 1; i > 0; i--) {
    result = mutl(A, B, result);
  }

  cout << result << endl;
}