#include<iostream>
using namespace std;
int main(){
    void sort(char **p);
    int m;
    char **p,*pstr[5],str[5][m];//若是整数则对一维数组取地址然后再由二维指针指向
    m=20;
    for(int i=0;i<5;i++)pstr[i]=str[i];
    for(int i=0;i<5;i++)cin>>pstr[i];
    p=pstr;
    sort(p);
    for(int i=0;i<5;i++){
        cout<<p[i]<<"    ";
    }
    }
    void sort(char **p){
        char *temp;
        for(int i=0;i<5;i++){
            for(int j=i+1;j<5;j++){
				if(p[i]>p[j]){
                    temp=p[i];
                    p[i]=p[j];
                    p[j]=temp;
                }
            }
        }
    }