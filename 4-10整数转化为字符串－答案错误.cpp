#include<iostream>
using namespace std;
void convert(int n){
    char c;
    if(n<10){
		c=n+'0';
        cout<<c;
    }
    else{
         c=n%10+'0';
        cout<<c<<" ";
        n/=10;
        convert(n);
    }
}
void convert1(int n){
    int i;
    char c;
    if((i=n/10)!=0){
        convert1(i);
        c=n%10+'0';
		cout<<" "<<c;
    }else{
        c=n+'0';
        cout<<c;
    }
}
int main(){
    int n=483;
    if(n<0){
        cout<<"-";
    }
    convert1(n);
}