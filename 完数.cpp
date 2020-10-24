#include<iostream>
using namespace std;
int main(){
    int sum,n,a[1000]={0};
    for(int i=2;i<1000;i++){
        sum=0;
        n=0;
        for(int j=1;j<i;j++){
			if(i%j==0){
				sum=sum+j;
                a[n++]=j;
            }
        }
        if(i==sum){
            cout<<i<<", its factors are ";
            for(int i=0;i<n;i++){
                cout<<a[i];
                if(i<n-1)cout<<",";
                else cout<<endl;
            }
        }
    }
}