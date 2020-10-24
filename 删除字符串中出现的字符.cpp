#include <iostream>
using namespace std;
void deletechar(char *str1, const char *str2) {
  char *t,*start = str1; // t保留每次出现相同字符的地址，start保留str1原始头地址
  int i = 0;
  while (*str1 != '\0') {
    while (*str1 != *(str2 + i) && *str1 != '\0') {
      str1++; //不相同字符跳过
    }
    if (*str1 != '\0') {
      t = str1;
      while (*str1 != '\0') //删除相同字符，并把后续字符前提
      {
        *str1 = *(str1 + 1);
        str1++;
      }
      str1 = t; //在前提后从原相同字符处开始验证字符
                //若用递归只需将这里改为 deletechar(t,str2);
    }
  }
  str1 = start;
}
// n个数循环后移m位
void move(int *a, int n, int m) {
  if (m == 0 || m % n == 0)
    return;
  int t = a[n - 1];
  for (int i = n - 1; i > 0; i--) {
    a[i] = a[i - 1];
  }
  a[0] = t;
  move(a, n, m - 1);
}
//每次后移1位，递归调用m次
int main() {
  char str1[] = "erftzzz   rtjartute", str2[] = "t";
  deletechar(str1, str2);
  cout << str1 << " " << str2;
}