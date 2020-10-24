#include<iostream>
using namespace std;
template<typename T>
T *Sort(T a[]){
    T temp;
    for(int i=0;i<sizeof(a);i++){
        for(int j=i+1;j<sizeof(a);j++){
            if(a[i]>a[j]){
                temp=a[i];
                a[i]=a[j];
				a[j]=temp;
            }
        }
    }
	return a;
}
int main(){
	int a[]={1,4,2,7,65,4,3,1,9,8};
    int *p=Sort<int>(a);
    for(int i=0;i<sizeof(p);i++){
        cout<<*(p+i)<<" ";
    }
}