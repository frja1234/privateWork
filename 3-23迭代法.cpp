
#include <cmath>
#include <iostream>
using namespace std;
int main() {
  float a, x0, x1;
  cin >> a;
  x0 = a / 2;
  x1 = (x0 + a / x0) / 2;
  do {
    x0 = x1;
    x1 = (x0 + a / x0) / 2;
  } while (fabs(x1 - x0) >= 1e-5);
  cout << x1;
}