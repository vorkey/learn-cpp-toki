#include <cstdio>

int x;
double y;
unsigned int yay;

struct boxes {
  int x, y;
};

boxes you, me;

int main() {
  x = 12;
  y = 543.12;

  you.x = 5;
  you.y = 12;
  // %d is for whole number (int, long long)
  // %lf is for floating point number (float, double), for some reason using
  // just %f takes 29 bytes meanwhile %lf takes 30 bytes
  // %f for float %lf for double
  // %c for char
  // use %u for unsigneds

  printf("Your boxes is %d \n", you.x * you.y);
  printf("Nilai x adalah %d\n", x);
  printf("Sedangkan nilai y adalah %lf\n", y);

  yay = 1234;

  printf("yay is %u \n", yay);
}