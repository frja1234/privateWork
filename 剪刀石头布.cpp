#include<iostream>
using namespace std;
int main(){
    char first,second;
    cout<<"请输入s（剪刀）,r（石头）,p（布）"<<endl;
	cin>>first>>second;
    if((first=='s'&&second=='p')||(first=='r'&&second=='s')||(first=='p'&&second=='r')){
		cout<<first<<"打败了"<<second<<endl;
    }if((second=='s'&&first=='p')||(second=='r'&&first=='s')||(second=='p'&&first=='r')){
		cout<<second<<"打败了"<<first<<endl;
    }
}