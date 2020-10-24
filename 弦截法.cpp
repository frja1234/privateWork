#include<iostream>
#include<cmath>
using namespace std;
float f(int x){
    return x*x*x;
}
int main(){
    float x,x1,x2,a,b;
    cin>>a>>b;
    x1=a;x2=b;
    do{
        x=(x1*f(x2)-x2*f(x1))/(f(x2)-f(x1));
		if(f(x)*f(x1)>0)x1=x;
        else x2=x;
    }while(f(x)<=1e-5);
    cout<<x;

}