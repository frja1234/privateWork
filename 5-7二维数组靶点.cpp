#include <iostream>
using namespace std;
int main() {
  int a[3][3], max = 0, maxj;
  bool flag;
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      cin >> a[i][j];
    }
  }
  for (int i = 0; i < 3; i++) {
    max = a[i][0];
    maxj = 0;
    for (int j = 0; j < 3; j++) {
      if (a[i][j] > max) {
        max = a[i][j];
        maxj = j;
      }
    }
    flag = true;
    for (int i = 0; i < 3; i++) {
      if (a[i][maxj] < max) {
        flag = false;
        continue;
      }
    }
    if (flag) {
      cout << a[i][maxj];
      break;
    }
  }
  if (!flag) {
    cout << "not exit";
  }
}
