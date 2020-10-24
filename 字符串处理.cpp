#include<iostream>
using namespace std;
//字符串复制
void strcpy1(char *str1, const char *str2){
    while(*str1++=*str2++);
}
char strcpy2(char *str1,const char *str2){
    char *p=str1;
    while(*str1++=*str2++);
    return *p;
}
//字符串比较
int strcmp1(char *str1,const char *str2){
    while(*str1&&*str2&&*str1==*str2){
        str1++;
        str2++;
    }
    return *str1-*str2;
}
int strcmp2(char *str1,const char *str2){
    while(*str1==*str2){
        if(*str1=='\0')return 0;
        str1++;
        str2++;
    }
    return *str1-*str2;
}
//字符串连接
char strcat(char *str1,const char *str2){
    while(*str1!='\0') str1++;
	while(*str1++=*str2++);
    return *str1;
}
//字符串长度
int strlen(const char *p){
    int n=0;
    while(*p!='\0'){
		p++;
        n++;
    }
    return n;
}
int main(){
    char str1[]="yhbh",str2[]="dnfk";
    //strcpy1(str1,str2);
    strcat(str1,str2);
    cout<<str1;
}