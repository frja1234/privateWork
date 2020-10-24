#include<iostream>
#include<istream>
#include<fstream>
using namespace std;
char in[10],out[10];
void output(){
    ofstream outfile("f1.dat",ios::out);//iOS::app:打开文件，数据写在末尾，
    //ios::ate:打开文件，指针指向末尾
    //iOS::binary,ios::nocreate,ios::noreplace

    if(!outfile){//outfile返回0为打开失败，否则为空
		cerr<<"打开失败！"<<endl;
        exit(1);
    }
	for(int i=0;i<10;i++){
        cin>>out[i];
        outfile<<out[i]<<" ";
    }
    outfile.close();
}
void input(){
    ifstream infile("f1.dat",ios::in);
    if(!infile){
		cerr<<"打开失败！";
        exit(1);
    }
    for(int i=0;i<10;i++){
        infile>>in[i];
        cout<<in[i]<<" ";
    }
    infile.close();
}
int main(){
    output();
    input();
    return 0;
}