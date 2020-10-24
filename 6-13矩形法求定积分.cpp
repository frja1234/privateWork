#include<iostream>
#include<cmath>
using namespace std;
int main(){
    float a1,b1,a2,b2,a3,b3;
    float intergral(float (*p)(float),float a,float b,int n);
    float fsin(float);
    float fcos(float);
    float fexp(float);
    int n=20;
    cout<<"请输入a1,b1:"<<endl;
    cin>>a1>>b1;
    cout<<intergral(fsin,a1,b1,n)<<endl;
    cout<<"请输入a2,b2:"<<endl;
    cin>>a2>>b2;
    cout<<intergral(fsin,a2,b2,n)<<endl;
    cout<<"请输入a3,b3:"<<endl;
    cin>>a3>>b3;
    cout<<intergral(fsin,a3,b3,n)<<endl;
}
float intergral(float (*p)(float),float a,float b,int n){
    float x,h,s;
    x=a;
    h=(b-a)/n;
    s=0;
    for(int i=0;i<n;i++){
        x=x+h;
		s=s+(*p)(x)*h;
    }
    return s;
}
float fsin(float x){
    return sin(x);
}
float fcos(float x){
    return cos(x);
}
float fexp(float x){
    return exp(x);
}