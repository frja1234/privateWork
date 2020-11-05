#include<iostream>
using namespace std;
int vNum(char *s,int n){
    int a=1;
    while(*(s+1)!='\0'|| *(s+2)!='\0'){
		while(*s=='\0')a++;
    }
    return a;
}
int main(){
	char s[100]="how are you what";
    //cin.getline(s,100,'\0');
	int n=vNum(s,100);
    cout<<sizeof(s)<<endl;
	cout<<n;
}
