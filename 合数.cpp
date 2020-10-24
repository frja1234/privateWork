#include<iostream>
using namespace std;
int main(){
    int n,i=2;
    cin>>n;
    while(i<=n){
        if(n%i==0){
            cout<<i<<",";
            n=n/i;
        }else{
            i++;
        }
    }
}