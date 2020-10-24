#include<iostream>
using namespace std;
int main(){
    int i,k,m,n,a[50],*p;
    cout<<"请输入人数：";
    cin>>n;
    p=a;
    for(i=0;i<n;i++){
        *(p+i)=i+1;
    }
    m=k=i=0;
    while(m<n-1){
        if(*(p+i)!=0)k++;
        if(k==3){
            *(p+i)=0;
            m++;
            k=0;
        }
        i++;
        if(i==n)i=0;
    }
    while(*p==0)p++;
	cout<<*p;
    return 0;
}