#include<iostream>
using namespace std;
int main(){
    char a[5]={'C','h','i','n','a'};
    for(int i=0;i<5;i++){
        if(a[i]>='a'&&a[i]<='z')a[i]=(a[i]-'a'+4)%26+'a';
        if(a[i]>='A'&&a[i]<='Z')a[i]=(a[i]-'A'+4)%26+'A';
        cout<<a[i];
    }

}
