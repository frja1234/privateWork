#include<iostream>
using namespace std;
void severse(int a[],int n){
    for(int i=0;i<n/2;i++){
		swap(a[i],a[n-i-1]);
    }
}
int main(){
    int a[10];
    for(int i=0;i<10;i++){
        cin>>a[i];
    }
    severse(a,10);
    for(int i=0;i<10;i++){
        cout<<a[i]<<" ";
    }
}
