#include <iostream>

using namespace std;

int main() {
  for (int i = 1; i <= 10; i++) {
    if (i % 2 == 0) {
      continue;
    }
    cout << "Hello Worrr " << i << endl;
    if (i % 5 == 0) {
      cout << "5 Mentioned!!!" << endl;
      break;
    }
  }

  // for (int i = 1; i <= 4; i++) {
  //   for (int j = 1; j <= i; j++) {
  //     if (j % 2 == 0) {
  //       cout << "*";
  //       break;
  //     }
  //   }
  // }

  int N = 10;

  for (int i = 1; i <= N; i++) {
    // cetak i buah "*"
    for (int j = 1; j <= i; j++) {
      cout << "*";
    }

    // sisanya, cetak "."
    for (int k = 1; k <= N - i; k++) {
      cout << ".";
    }
    cout << endl;
  }

  for (int i = 1; i <= N; i++) {
    for (int j = 1; j <= N; j++) {
      if (i == 1 || i == N || j == 1 || j == N) {
        // jika baris atau kolom saat ini adalah yang pertama atau terakhir,
        // cetak bintang
        cout << "*";
      } else {
        // selain itu, cetak titik
        cout << ".";
      }
    }
    cout << endl;
  }

  for (int i = 1; i <= N; i++) {
    for (int j = 1; j <= N; j++) {
      if (i == j || i == N - j + 1) {
        cout << "*";
      } else {
        cout << ".";
      }
    }
    cout << endl;
  }
}