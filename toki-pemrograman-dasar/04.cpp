#include <iostream>

using namespace std;

int main() {
  int tahun_kabisat = 2100;

  if ((tahun_kabisat % 4 == 0 && tahun_kabisat % 100 != 0) ||
      tahun_kabisat % 400 == 0) {
    cout << tahun_kabisat << " adalah tahun kabisat" << endl;
  } else {
    cout << tahun_kabisat << " bukan merupakan tahun kabisat" << endl;
  }
}