#include<iostream>
using namespace std;
int convertToInt(char s[],int start);
int main(){
    int sum=0,i=0;
    char s[20];
    cin.getline(s,20,'\0');
    while((s[i]<'0'||s[i]>'9')&&s[i]!='\0') i++;
    while(s[i]!='\0'){
        sum=sum+convertToInt(s,i);
        while(s[i]>='0'&&s[i]<='9')i++;
		while((s[i]<'0'||s[i]>'9')&&s[i]!='\0') i++;
    }
    cout<<sum<<endl;
}
int convertToInt(char s[],int start){
    int data=0;
    while(s[start]>='0'&&s[start]<='9'&&s[start]!='\0'){
        data=data*10+s[start++]-'0';
    }
    return data;
}
