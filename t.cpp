#include<iostream>
using namespace std;
#define ADD(x) (x)*(x)
int main(){
    int a=4,b=6,c=7,d=ADD(a+b)*c;
    cout<<d<<endl;
}