#include<iostream>
using namespace std;
int main(){
    int a[7]={0};
    srand(0);
    for(int i=1;i<=10000;i++){
        ++a[1+rand()%6];
    }
    for(int i=1;i<=6;i++){
        cout<<i<<":"<<a[i]<<" ";
    }
}
