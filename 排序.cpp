#include <iostream>
using namespace std;
//二分查找
void haleSeek(int a[], int n, int x);
//选择排序
void selectSort(int a[], int n);
//插入排序
void insertSort(int a[], int n);
//快速排序
void quickSort(int a[], int low, int high);
int main() {
  int a[10];
  for (int i = 0; i < 10; i++) {
    cin >> a[i];
  }
  insertSort(a, 10);
  for (int i = 0; i < 10; i++) {
    cout << a[i] << "    ";
  }
  haleSeek(a, 10, 4);
}
void haleSeek(int a[], int n, int x) {
  int low = 0, heigh = n, mid;
  while (low <= heigh) {
    // mid=(low+heigh)/2;
    mid = low + (x - a[low]) / (heigh - low) * (a[heigh] - a[low]);//自适应
    if (a[mid] == x)
      break;
    if (a[mid] < x)
      low = mid + 1;
    else
      heigh = mid - 1;
  }
  if (low > heigh)
    cout << "没有找到";
  else
    cout << mid;
}
void insertSort(int a[], int n) {
  int current, preIndex;
  for (int i = 0; i < n - 1; i++) {
    current = a[i + 1];
    preIndex = i;
    while (a[preIndex] > current && preIndex >= 0) {
      a[preIndex + 1] = a[preIndex];
      --preIndex;
    }
    a[preIndex + 1] = current;
  }
}

void selectSort(int a[], int n) {
  int temp, minIndex;
  for (int i = 0; i < n; i++) {
    minIndex = i;
    for (int j = i + 1; j < n; j++) {
      if(a[minIndex]>a[j])minIndex=j;
    }
    temp = a[minIndex];
    a[minIndex] = a[i];
    a[i] = temp;
  }
}
void shellSort(int a[], int n) {
  int temp, gap, preIndex;
  gap=5;
  gap /= 2;
  while (gap > 0) {
    for (int i = gap; i < n; i++) {
      temp = a[i];
      preIndex = i - gap;
      if (preIndex > 0 && a[preIndex] > temp) {
        a[preIndex + gap] = a[preIndex];
        preIndex -= gap;
      }
      a[preIndex + gap] = temp;
    }
    gap /= 2;
  }
}
void quickSort(int a[], int low, int high) {
  int i, j, key, temp;
  i = low;
  j = high + 1;
  key = a[low];
  while (true) {
    while (a[++i] < key) {
      if (i == high)
        break;
    }
    while (a[--j] > key) {
      if (j == low)
        break;
    }
    temp = a[i];
    a[i] = a[j];
    a[j] = temp;
    temp = a[low];
    a[low] = a[j];
    a[j] = temp;
    key = a[low];
    quickSort(a, low, j - 1);
    quickSort(a, j + 1, high);
  }
}
