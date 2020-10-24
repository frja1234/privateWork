#include<iostream>
#include<cmath>
using namespace std;
double solut(double a,double b,double c,double d){
    double x,x0,f,f1;
    x=1;
    do
    {
        x0=x;
        f=((a*x0+b)*x0+c)*x0+d;
        f1=(3*a*x0+2*b)*x0+c;
        x=x0-f/f1;
    }while(fabs(x-x0)>=1e-5);
    return x;
}
int main(){
    double a,b,c,d;
    cin>>a>>b>>c>>d;
    cout<<solut(a,b,c,d);


}