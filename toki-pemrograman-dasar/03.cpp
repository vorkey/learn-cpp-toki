#include <iostream>
using namespace std;

int main() {
  int luas_kandang = 12;
  int total_luas_kandang = luas_kandang;

  int total_kandang = 1;

  while (total_luas_kandang < 800) {
    luas_kandang += 7;
    total_luas_kandang += luas_kandang;

    total_kandang += 1;
  }
  cout << total_kandang << endl;
}