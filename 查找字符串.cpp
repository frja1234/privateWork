#include<iostream>
using namespace std;
int index(char *s,char *t){
    int a=0;
    while(s++&&*s!=*t);
    while(*t!='\0'){
        if(*t!=*s||*s=='\0'){
            return -1;
        }
        s++;
        t++;
		a++;
    }
    return a;
}
int main(){
    char *s="abcde",*t="bcd";
    int a=index(s,t);
    cout<<a;

}