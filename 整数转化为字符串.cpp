#include<iostream>
using namespace std;
int main(){
    void convert(int n);
    int number;
    cout<<""<<endl;
    cin>>number;
    cout<<""<<endl;
    if(number<0)number=-number;
    convert(number);
    cout<<endl;
    return 0;
}
void convert(int n){
    int i;
    char c;
    if((i=n/10)!=0)
    convert(i);
    c=i%10+'0';
    cout<<" "<<c;
}