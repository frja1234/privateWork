#include<iostream>
using namespace std;
int main(){
    int i,n;
    cout<<"请输入一个整数："<<endl;
    cin>>n;
    cout<<n<<"=";
    for(i=2;i<n;i++){
        if(n!=i){
            while(n%i==0){
                cout<<i<<"*";
                n/=i;
            }
        }
        else break;
    }
    cout<<n;
}