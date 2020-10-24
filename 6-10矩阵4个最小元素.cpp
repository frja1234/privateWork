#include<iostream>
using namespace std;
int main(){
    int a[5][5],i,j,*p;
    void change(int *p);
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin>>a[i][j];
        }
    }
    p=&a[0][0];
    change(p);
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cout<<a[i][j]<<"  ";
        }
        cout<<endl;
    }
}
void change(int *p){
    int *max,*min,temp;
    max=min=p;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(*max<*(p+5*i+j))max=p+5*i+j;
            if(*min>*(p+5*i+j))min=p+5*i+j;
        }
    }
    temp=*p;
    *p=*min;
    *min=temp;
    temp=*(p+12);
    *(p+12)=*max;
    *max=temp;
    min=p+1;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
             if(*(p+5*i+j)!=*p&&*min>*(p+5*i+j))min=p+5*i+j;
        }
    }
    temp=*(p+4);
    *(p+4)=*min;
    *min=temp;
    min=p+1;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
             if(*(p+5*i+j)!=*p&&*(p+5*i+j)!=*(p+4)&&*min>*(p+5*i+j))min=p+5*i+j;
        }
    }
     temp=*(p+20);
    *(p+20)=*min;
    *min=temp;
    min=p+1;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
             if(*(p+5*i+j)!=*p&&*(p+5*i+j)!=*(p+4)&&*(p+5*i+j)!=*(p+20)&&*min>*(p+5*i+j))min=p+5*i+j;
        }
    }
     temp=*(p+24);
    *(p+24)=*min;
    *min=temp;
}