#include<iostream>
using namespace std;
#define ADD(x) (x)*(x)
int main(){
    int n,i,j,k;
    n=0;
    for(i=1;i<9;i++)
    for(k=0;k<=8;k+=2)
    if(k!=i){
        for(j=0;j<=9;j++)
        if(j!=i&&j!=k){
            cout<<i<<j<<k<<" ";
        }
    }
    cout << n << " ";
}