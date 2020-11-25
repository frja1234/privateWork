
#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
bool isprime(int n){
    float s=sqrt(float(n));
    for(int i=2;i<s;i++)
        if(n%i==0)return false;
	return true;
}
//根号法
/*int main(){
    for(int i=2;i<1000;i++){
        if(isprime(i)){
            cout<<i<<" ";
            if(i%5==0){
                cout<<endl;
            }
        }
    }
}*/

//筛法
/*int main(){
    int a[1001],k=1;
    for(int i=2;i<1000;i++)a[i]=1;
    float n=sqrt(float(1000));
    for(int i=2;i<n;i++){
		if(a[i]==1){
            k=2*i;
            while(k<=1000){
                a[k]=0;
                k=k+i;
            }
        }
    }
    for(int i=2;i<1000;i++){
        if(a[i]==1)
        cout<<setw(5)<<i;
    }
}*/
//奇数法
int main(){
	int m,count=0;
    cin>>m;
    if(m==2)count=2;
    else{
        for(int i=1;i<=m;i+=2){
            if(m%i==0)count++;
        }
    }
    if(count==2)
    cout<<m<<"是一个素数";
    else
    cout<<m<<"不是一个素数";
}