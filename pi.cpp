#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int i=1,k=1;
    double t=1,pi=0;
    while(fabs(t)>1e-8){
        pi=pi+t;
        i=i+2;
        k=-k;
        t=k/double(i);
    }
    cout<<4*pi;
}