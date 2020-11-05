#include<iostream>
using namespace std;
/*int gcd(int m,int n){
    while(m!=n){
        if(m>n)m=m-n;
        else m=n-m;
    }
    cout<<"jbjfs";
    return m;
}
int main(){
    int a=gcd(4,6);
    cout<<a;
}*/
//辗转相除法
int main(){
    int r,x,y;
    cin>>x>>y;
    r=x%y;
    while(true){
        r=x%y;
        if(r==0)return y;
        else{
            x=y;y=r;
        }
    }
}