#include<iostream>
using namespace std;
int main(){
    int max,min,s,x;
    max=0;
    min=10;
    s=0;
    for(int i=0;i<10;i++){
        cin>>x;
        s=s+x;
        if(max<x)max=x;
        if(min>x)min=x;

    }
    s=s-max-min;
    cout<<"max:"<<max<<"min:"<<min<<"svg:"<<s/8;
    
}