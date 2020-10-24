#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    char a[]="*****";
    for(int i=0;i<4;i++){
        cout<<setw(i+5)<<a<<endl;
    }
}