#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int a,b,c;
    float k;
    cin>>a>>b>>c;
    if(a==0){
        if(b==0)cout<<"错误！";
        else cout<<-c/b;
    }else{
        k=sqrt(b*b-4*a*c);
        if(fabs(k)<=1e-6){
            cout<<"x="<<(-b/(2*a));
        }else if(fabs(k)>1e-6){
            cout<<"x1="<<(-b-k)/2*a<<"x2="<<(-b+k)/2*a;
        }else{
            cout<<"无解";
        }

    }

}