#include<iostream>
#include<cmath>
using namespace std;
int main(){
    float t,s,x,f;
    int i,n;
    cin>>x;
    s=t=f=x;
    i=n=1;
    do{
        i=-i;
        n=n*(n+1)*(n+2);
        f=f*x*x;
        t=i*f/n;
        s=s+t;
        cout<<i<<endl;
    }while(fabs(t)>1e-6);
    cout<<s;
}