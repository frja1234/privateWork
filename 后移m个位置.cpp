#include<iostream>
using namespace std;
int main(){
    int a[10],m,n=10;
    cout<<"请输入数据："<<endl;
    for(int i=0;i<10;i++)cin>>a[i];
    cout<<"请输入后移位数："<<endl;
    cin>>m;
    for(int i=0;i<m;i++){
        int temp=a[n-1];
        for(int j=n-1;j>0;j--){
            a[j]=a[j-1];
        }
        a[0]=temp;
    }
    for(int i=0;i<n;i++)cout<<a[i]<<" ";
}